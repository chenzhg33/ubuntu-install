AllTest : Date.o Meeting.o User.o UserManage.o MeetingManage.o unittest.cpp
	g++ -o AllTest Date.o Meeting.o User.o UserManage.o MeetingManage.o unittest.cpp -lgtest -lpthread
Date.o : Date.h Date.cpp
	g++ -c Date.h Date.cpp
User.o : User.cpp User.h
	g++ -c User.h User.cpp
Meeting.o : Meeting.h Meeting.cpp
	g++ -c Meeting.h Meeting.cpp
UserManage.o : UserManage.h UserManage.cpp
	g++ -c UserManage.h UserManage.cpp
MeetingManage.o : MeetingManage.cpp MeetingManage.h
	g++ -c MeetingManage.cpp MeetingManage.h
clean :
	rm *.o *.h.gch
