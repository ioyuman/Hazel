#pragma once
#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreatApplication();//extern���������������ط������ʵ��

int main(int argc,char **argv)
{
	printf("hello game engine");
	auto app = Hazel::CreatApplication();
	app->Run();
}
#endif