#include <node.h>

#include "png.h"

extern "C" void
init(v8::Handle<v8::Object> target)
{
    v8::Isolate *isolate = v8::Isolate::GetCurrent();
    v8::HandleScope scope(isolate);

    Png::Initialize(target);
}
