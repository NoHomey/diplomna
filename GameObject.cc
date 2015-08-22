#include "GameObject.hh"

GameObject::GameObject (const View& view, const long long& id) noexcept
: View {view}, Object {id} {}


auto GameObject::setAtPosition (const Position& position) -> void {
	for(auto p : view_)
		p.goToPosition(position);
}