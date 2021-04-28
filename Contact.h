#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define MAX_NAME 20
#define MAX_TELE 12
#define MAX_ADDRESS 30
#define COUNT 3
#define SEX 10
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct PeopleInfor
{
	char name[MAX_NAME];
	int age;
	char tele[MAX_TELE];
	char address[MAX_ADDRESS];
	char sex[SEX];
};
struct Contact
{
	struct PeopleInfor *data;
	int size;
	int nub;
};
enum
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};
void InitContact(struct Contact* p);
void AddContact(struct Contact* p);
void ShowContact(const struct Contact* p);
void DelContact(struct Contact* p);
void SearchContact(const struct Contact *p);
void ModifyContact(struct Contact* p);
void Release(struct Contact* p);