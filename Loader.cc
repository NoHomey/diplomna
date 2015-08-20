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
		int flag {0};
		Position position {};
		for(auto c : line) {
			switch (c) {
				case '&':
					flag = 1;
					break;
				case '#':
					flag = 2;
					position = {x, y};
					break;
				case '~':
					flag = 3;
					break;
				case 'x':
					flag = 4;
					break;
				case '!':
					loaded.setSize(height, width);
					return loaded;
				default : 
					switch(flag) {
						case 0:
							decimal(x, c);
							break;
						case 1:
							decimal(y, c);
							break;
						case 2:
							loaded.add(position, (c - '0'));
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