
#include <DMT.h>

class Sandbox : public DMT::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

DMT::Application* DMT::CreateApplication() {
	return new Sandbox();
}

