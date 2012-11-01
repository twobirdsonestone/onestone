#ifndef ONESTONE_COMPONENT_H_
#define ONESTONE_COMPONENT_H_

namespace OneStone {

class Component {
public:
	Component(int id) { id_ = id; };
	virtual ~Component() = 0;
	int id() { return id_; };

private:
	int id_;
};

}

#endif