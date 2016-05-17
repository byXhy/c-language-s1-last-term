
static int x = 8;

static int func(void)
{
    return x;
}

int func1(void)
{
    return func();
}

