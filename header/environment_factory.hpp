#ifdef __ENVIRONMENT_FACTORY__
#define __ENVIRONMENT_FACTORY__

class Environment_Factory {
    private:
	Environment environment;
    public:
	Enviroment_Factory(){}
	virtual Environment create_environment_factory() = 0;
}

#endif
