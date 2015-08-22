#include "Loader.hh"
#include "Render.hh"
#include <fstream>

Loader::Loader (const std::string& dir) noexcept
: dir_ {dir} {}

auto Loader::load (const std::string& name) const -> Loaded {
	std::string rendered {dir_ + name + "/" + name + ".rddx"};
	std::ifstream renderedFile {rendered.c_str()};
	if (!renderedFile.is_open()) {
		Render render;
		render.rend(dir_, name);
		return load(name);
	} 
	std::string line {};
	Loaded loaded {};
	unsigned height {0};
	unsigned width {0};
	while(getline(renderedFile , line)) {
		int x {0};
		int y {0};
		int witch {0};
		bool flag {false};
		Position position {};
		for(auto c : line) {
			switch (c) {
				case '-':
					flag = true;
					break;
				case '&':
					x *= flag ? -1 : 1;
					flag = false;
					witch = 1;
					break;
				case '#':
					y *= flag ? -1 : 1;
					position.setXY(x, y);
					witch = 2;
					break;
				case '~':
					witch = 3;
					break;
				case 'x':
					witch = 4;
					break;
				case '!':
					loaded.setSize(height, width);
					return loaded;
				default : 
					switch(witch) {
						case 0:
							decimal(x, c);
							break;
						case 1:
							decimal(y, c);
							break;
						case 2:
							loaded.append(position, (c - '0'));
							break;
						case 3:
							decimal(height, c);
							break;
						case 4:
							decimal(width, c);
							break;
					}
					break;
			}
		}
	}
}

auto Loader::setDir (const std::string& dir) noexcept -> void {
	dir_ = dir;
}

auto Loader::getDir (void) const noexcept -> std::string {
	return dir_;
}

auto Loader::decimal (auto& varible, const char& c) const noexcept -> void {
	varible *= 10;
	varible += (c - '0');
}