//Edited by fandog, 02/15/2000

inherit ROOM;
void create()
{
	set("short", "驿道");
	set("long", @LONG
你走在一条尘土飞扬的大驿道上。四周人来人往。挑担子的行商，
赶着大车的马夫，出门远游的书生，熙熙攘攘，非常热闹。不时还有两
三骑快马从身边飞驰而过，扬起一路尘埃。马上的人个个身着劲装，衣
甲鲜明，有的还随身佩带着刀剑。看来都是些习武的江湖人。道路两旁
是整整齐齐的杨树林。南边就是号称“九省通衢”的武汉了。
LONG );
	set("exits", ([
		"south" : __DIR__"hzjie1",
		"north" : __DIR__"yidao1",
	]));
	set("outdoors", "jiangling");
	set("no_clean_up", 0);
	set("coor/x", -1500);
	set("coor/y", -2090);
	set("coor/z", 0);
	setup();
	replace_program(ROOM);
}