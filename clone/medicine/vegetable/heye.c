// heye.c ��Ҷ

inherit ITEM;
#include <ansi.h>

void init()
{
	add_action("do_eat", "eat");
	add_action("do_eat", "fu");
}

void create()
{
	set_name(HIG"��Ҷ"NOR, ({"heye"}));
	set_weight(500);
	set("vegetable", 4);
	set("value", 5);
	set("nostrum", 2);
	set("unit", "Ƭ");
	set("long", "����һƬ���̵ĺ�Ҷ������������ҩ��\n");
	set("pour_type", "1");
	setup();
}

int do_eat(string arg)
{
	object me = this_player();

	if(!id(arg)) return notify_fail("��Ҫ��ʲô��\n");
	if(!present(this_object(), me))
		return notify_fail("��Ҫ��ʲô��\n");
	if( me->is_busy() )
		return notify_fail("�𼱣������ԣ�С�ı�ҭ���ˡ�\n");

	write("�Ժ�Ҷ���㲻�������Ҷ�ӵ�ˮƽ�ɣ�\n");
	return 1;
}