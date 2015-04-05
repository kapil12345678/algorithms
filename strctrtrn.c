int f()
{
	int a = 2;
	return a;
}

/*Now a gets the memory in stack and its life-span is within the f() in order to return the value it copies the value to a special register which is read by the caller as it knows that the callee have placed the value for him. (Since the size of return-value-holder special register size is limited that's why we cant return large objects therefore In case of advance languages when we want to return object function actually copies the address of object in heap to that special register)

  Lets come back to C for a situation when i want to return a struct variable not pointer:*/

struct inventory
{
	char name[20];
	int number;
};
struct inventory function();

int main()
{
	struct inventory items;
	items=function();
	printf("\nam in main\n");
	printf("\n%s\t",items.name);
	printf(" %d\t",items.number); 
	return 0;
}

struct inventory function()
{
	struct inventory items;
	printf(" enter the item name\n ");
	scanf(" %s ",&items.name );
	printf(" enter the number of items\n ");
	scanf("%d",&items.number );
	return items;
}
