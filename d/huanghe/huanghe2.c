// Room: /huanghe/huanghe2.c
// Java. Sep 21 1998

#include <room.h>

inherit ROOM;
void create()
{
	set("short", "�ƺӰ���");
	set("long", @LONG
�����ǻƺӰ��ߡ��ƺ����ʵ�����Ѿ���ɳ�����ˡ���ɫ�ĺ�ˮ
�ںӴ��﷭���ţ������ţ�����һ�����޴�����С�
LONG );
	set("exits", ([
		"east"  : __DIR__"huanghe3",
		"west"  : __DIR__"huanghe1",
	]));
	set("no_clean_up", 0);
	set("outdoors", "huanghe");
	set("coor/x", -500);
	set("coor/y", 520);
	set("coor/z", 0);
	setup();
	replace_program(ROOM);
}