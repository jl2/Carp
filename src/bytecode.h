#pragma once

#include "obj.h"

Obj *form_to_bytecode(Process *process, Obj *env, Obj *form);
Obj *bytecode_eval(Process *process, Obj *bytecode);
Obj *bytecode_eval_internal(Process *process, Obj *bytecodeObj, int steps);
