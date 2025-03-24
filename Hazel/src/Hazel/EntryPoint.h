#pragma once
#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreatApplication();//extern声明函数在其他地方定义和实现

int main(int argc,char **argv)
{
	printf("hello game engine");
	auto app = Hazel::CreatApplication();
	app->Run();
}
#endif