#pragma once

#include "obj.h"
#include "types.h"

Obj *primitive_to_obj(Process *process, void *primitive, Obj *return_type);
Obj *primitive_array_to_obj_array(Process *process, Array *carp_array, Obj *inner_type);

Array *obj_array_to_carp_array(Process *process, Obj *obj_array);
