
/*
 * Copyright (C) Dmitry Volynsev
 * Copyright (C) NGINX, Inc.
 */

#ifndef _NJS_MODULE_H_INCLUDED_
#define _NJS_MODULE_H_INCLUDED_


typedef struct {
    nxt_str_t                   name;
    njs_object_t                object;
    njs_index_t                 index;
    njs_function_t              function;
} njs_module_t;


nxt_int_t njs_module_load(njs_vm_t *vm);
void njs_module_reset(njs_vm_t *vm);
nxt_int_t njs_parser_module(njs_vm_t *vm, njs_parser_t *parser);
njs_ret_t njs_module_require(njs_vm_t *vm, njs_value_t *args,
    nxt_uint_t nargs, njs_index_t unused);


extern const nxt_lvlhsh_proto_t  njs_modules_hash_proto;
extern const njs_object_init_t   njs_require_function_init;


#endif /* _NJS_MODULE_H_INCLUDED_ */
