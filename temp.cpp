class Thing
{
public:
    char c;
    int *p;
    float &f;
    Thing(char ch, float x)
    {
        c = ch;
        // can not assign float to int pointer
        // a value of type "float *" cannot be assigned to an entity of type "int *"C/C++(513)
        p = &x;
        // reference needs to be initialized before use
        // "Thing::Thing(char ch, float x)" provides no initializer for:C/C++(366)
        // temp.cpp(8, 5): reference member "Thing::f"
        f = x;
    }
}; // missing semicolon