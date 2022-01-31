#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "xxxx.h"



xxxx_t *xxxx_create(
    int foo,
    int bar
    ) {
    xxxx_t *xxxx_local_var = malloc(sizeof(xxxx_t));
    if (!xxxx_local_var) {
        return NULL;
    }
    xxxx_local_var->foo = foo;
    xxxx_local_var->bar = bar;

    return xxxx_local_var;
}


void xxxx_free(xxxx_t *xxxx) {
    if(NULL == xxxx){
        return ;
    }
    listEntry_t *listEntry;
    free(xxxx);
}

cJSON *xxxx_convertToJSON(xxxx_t *xxxx) {
    cJSON *item = cJSON_CreateObject();

    // xxxx->foo
    if (!xxxx->foo) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "foo", xxxx->foo) == NULL) {
    goto fail; //Numeric
    }


    // xxxx->bar
    if (!xxxx->bar) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "bar", xxxx->bar) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

xxxx_t *xxxx_parseFromJSON(cJSON *xxxxJSON){

    xxxx_t *xxxx_local_var = NULL;

    // xxxx->foo
    cJSON *foo = cJSON_GetObjectItemCaseSensitive(xxxxJSON, "foo");
    if (!foo) {
        goto end;
    }

    
    if(!cJSON_IsNumber(foo))
    {
    goto end; //Numeric
    }

    // xxxx->bar
    cJSON *bar = cJSON_GetObjectItemCaseSensitive(xxxxJSON, "bar");
    if (!bar) {
        goto end;
    }

    
    if(!cJSON_IsNumber(bar))
    {
    goto end; //Numeric
    }


    xxxx_local_var = xxxx_create (
        foo->valuedouble,
        bar->valuedouble
        );

    return xxxx_local_var;
end:
    return NULL;

}
