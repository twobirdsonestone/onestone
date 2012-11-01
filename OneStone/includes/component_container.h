#ifndef COMPONENT_CONTAINER_H_
#define COMPONENT_CONTAINER_H_

#include "component.h"
#include <vector>

namespace OneStone {

class ComponentContainer {
public:
	ComponentContainer();
	virtual ~ComponentContainer() = 0;
	void		addComponent(Component *c);
	void		removeComponent(int id);
	bool        hasComponent(int id);
	Component   *getComponent(int id);

private:
	std::vector<Component*> components_;
};

}
#endif