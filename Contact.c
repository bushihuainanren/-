#include "contact.h"

void CheakCount(struct Contact* p)
{
	if (p->size == p->nub)
	{
		struct PeopleInfor * ptr = realloc(p->data, (p->nub + 2) * sizeof(struct PeopleInfor));
		if (ptr != NULL)
		{
			p->data = ptr;
			p->nub += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}
static int Search(const struct Contact* p,char *p1)
{
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		if (0 == strcmp(p->data[i].name, p1))
		{
			return i;
		}
	}
	return -1;
}
void InitContact(struct Contact* p)
{
	p->data = (struct PeopleInfor*)malloc(COUNT * sizeof(struct PeopleInfor));
	if (p->data == NULL)
	{
		return;
	}
	p->size = 0;
	p->nub = COUNT;
}
void AddContact(struct Contact* p)
{
	CheakCount(p);
	printf("姓名：");
	scanf("%s", p->data[p->size].name);
	printf("性别：");
	scanf("%s", p->data[p->size].sex);
	printf("年龄：");
	scanf("%d", &(p->data[p->size].age));
	printf("电话：");
	scanf("%s", p->data[p->size].tele);
	printf("地址：");
	scanf("%s", p->data[p->size].address);
	printf("添加成功\n");	
	p->size++;
}
void ShowContact(const struct Contact* p)
{
	int i = 0;
	printf("%-20s\t%-20s\t%-20s\t%-20s\t%-20s\n",
		"姓名", "性别", "年龄", "电话", "地址");
	for (i = 0; i < p->size; i++)
	{
		printf("%-20s\t%-20s\t%-20d\t%-20s\t%-20s\n",
			p->data[i].name, p->data[i].sex,
			p->data[i].age, p->data[i].tele,
			p->data[i].address);
	}
}
void DelContact(struct Contact* p)
{
	char name[MAX_NAME];
	scanf("%s", name);
	int pos = Search(p,name);
	
	if (pos == p->size)
	{
		printf("找不到你要删除的对象\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < p->size - 1; j++)
		{
			p->data[j] = p->data[j + 1];
		}
		p->size--;
		printf("删除成功\n");
	}

}
void  SearchContact(const struct Contact* p)
{
	char name[MAX_NAME];
	printf("请输入您要查找的姓名:>");
	scanf("%s", name);
	int pow = Search(p, name);
	if (pow !=-1 )
	{
		printf("%-20s\t%-20s\t%-20s\t%-20s\t%-20s\n",
			"姓名", "性别", "年龄", "电话", "地址");
		printf("%-20s\t%-20s\t%-20d\t%-20s\t%-20s\n",
			p->data[pow].name, p->data[pow].sex,
			p->data[pow].age, p->data[pow].tele,
			p->data[pow].address);
	}
	
}
void ModifyContact(struct Contact* p)
{
	printf("请输入需要修改的姓名:>");
	char name[MAX_NAME];
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		if (0 == strcmp(p->data[i].name, name))
		{
			printf("姓名：");
			scanf("%s", p->data[i].name);
			printf("性别：");
			scanf("%s", p->data[i].sex);
			printf("年龄：");
			scanf("%d", &(p->data[i].age));
			printf("电话：");
			scanf("%s", p->data[i].tele);
			printf("地址：");
			scanf("%s", p->data[i].address);
			printf("修改成功\n");
		}
	}
	if (i == p->size);
	{
	printf("找不到你需要修改的对象");
	}
	
}
void Release(struct Contact* p)
{
	free(p->data);
	p->data = NULL;
}



