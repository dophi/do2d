#include <stdbool.h>
static _Bool gbool = 1;
static long long int glli = 3;
int func1(){
   bool a = true;
   return a;
}
int main(){
    int a;
    a = func1();
    int b;
    b = a+1;
    return 0;
}

struct do2d_texture {
    int id;
    int refcount;
};

void do2d_textrue_addref(struct do2d_texture* tex){
    refcount++;
}

void do2d_texture_release(struct do2d_texture* tex){
}

struct do2d_ref {
    int count; //引用次数

}

do2d_ref_add(struct do2d_ref* ref) {
    
}

do2d_ref_release(struct do2d_ref* ref) {
}

texture_cache = {}
texture_cache.texname2id = {}
texture_cache.get_texture(texname){
    local tex = self[texname]
    return tex
}








