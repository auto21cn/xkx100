// Room: /d/taishan/yunbu.c
// Last Modified by winder on Aug. 25 2001

inherit ROOM;

void create()
{
	set("short", "�Ʋ���");
	set("long", @LONG
�ڿ�����ﱱ�׾����Ʋ��š��������ï�������������ƣ����ѵ
�⡰�Ʋ��š����ű����ֺ��ٶ��£���������������ʯƺ̹����������
�����ڴ�פ�ϣ���������ƺ���������д档᷶�����ˮ��������������
��к����ĭ���飬���ƻ�����εΪ׳�ۣ������������ҡ���ӡ�����Ȫ��
�����С����ŷ��١��������������������ɽԪ��������̫����������
��̡������·�����ʫ���������¸������̣���մ��������ѡ�������
�³����꣬�羲���������ҡ���ˮ������ƬƬ��������֯�¾�ꡣ��ɽ
���ż����£��ؿ�б�������ޡ���
    �˴�������Ȫͤ���ɴ����ϣ����������¡�
LONG );
	set("exits", ([
		"east"   : __DIR__"zhuoquan",
		"south"  : __DIR__"kuaihuosan",
		"westup" : __DIR__"sandengya",
	]));
	set("outdoors", "taishan");
	set("no_clean_up", 0);
	set("coor/x", 390);
	set("coor/y", 680);
	set("coor/z", 100);
	setup();
	replace_program(ROOM);
}