#include "component_container.h"
using namespace OneStone;

ComponentContainer::ComponentContainer() {
}

ComponentContainer::~ComponentContainer() {
}

void ComponentContainer::addComponent(Component *c) {
	if (!hasComponent(c->id())) {
		components_.push_back(c);
	}
}

void ComponentContainer::removeComponent(int id) {
	for (unsigned i = 0; i < components_.size(); i++) {
		if (components_[i]->id() == id) {
			components_.erase(components_.begin() + i);
		}
	}
}

bool ComponentContainer::hasComponent(int id) {
	for (unsigned i = 0; i < components_.size(); i++) {
		if (components_[i]->id() == id) {
			return true;
		}
	}
	return false;
}

Component *ComponentContainer::getComponent(int id) {
	for (unsigned i = 0; i < components_.size(); i++) {
		if (components_[i]->id() == id) {
			return components_[i];
		}
	}
	return NULL;
}