//Room: /d/dali/bijishan.c
//Date: June. 29 1998 by Java

inherit ROOM;
void create()
{
	set("short","�̼�ɽ��");
	set("long",@LONG
�̼�ɽ���ڵ�ص������ϣ����ض��Ǹ�ˮ������ɽ�Ƹ������ƣ�
ɽ�����繫������ɽ��ľ�Դ����Ρ��˴����Ǽ������Ѵ��ƶˣ�����
���һƬ��������ʤ�ա�ɽ���������������ݡ�����������ɽ֮·��
LONG);
	set("objects", ([
	   __DIR__"npc/youke": 1,
	]));
	set("outdoors", "dalic");
	set("exits",([ /* sizeof() == 1 */
	    "westdown"  : __DIR__"qingxi",
	    "eastdown"  : __DIR__"yanan2",
	]));
	set("coor/x", -36000);
	set("coor/y", -70980);
	set("coor/z", 30);
	setup();
	replace_program(ROOM);
}