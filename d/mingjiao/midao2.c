// Room: /d/mingjiao/midao2.c
// Date: Java 97/04/9

inherit ROOM;
#include <room.h>
void create()
{
	set("short", "ʯ��");
	set("long", @LONG
����һ��СС��������Χ����ʯ�ڣ���Ϊ��Ӳ����������ʲô��
���ܴ��Ƶġ�ʯ�������ֲ�����ָ��˳��ʯ���������ţ�������Χ��ʯ
�š�
LONG );
	set("exits", ([
		"south" : __DIR__"midao10",
		"north" : __DIR__"midao6",
		"east"  : __DIR__"midao3",
		"west"  : __DIR__"midao1",
	]));
	set("no_clean_up", 0);
	set("no_drop", 1);
	set("coor/x", -52030);
	set("coor/y", 1070);
	set("coor/z", 90);
	setup();
	create_door("south", "ʯ��", "north", DOOR_CLOSED);
	create_door("north", "ʯ��", "south", DOOR_CLOSED);
	create_door("east",  "ʯ��", "west",  DOOR_CLOSED);
	create_door("west",  "ʯ��", "east",  DOOR_CLOSED);
	replace_program(ROOM);
}