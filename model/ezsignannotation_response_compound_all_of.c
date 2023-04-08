#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignannotation_response_compound_all_of.h"



ezsignannotation_response_compound_all_of_t *ezsignannotation_response_compound_all_of_create(
    textstylestatic_response_compound_t *obj_textstylestatic
    ) {
    ezsignannotation_response_compound_all_of_t *ezsignannotation_response_compound_all_of_local_var = malloc(sizeof(ezsignannotation_response_compound_all_of_t));
    if (!ezsignannotation_response_compound_all_of_local_var) {
        return NULL;
    }
    ezsignannotation_response_compound_all_of_local_var->obj_textstylestatic = obj_textstylestatic;

    return ezsignannotation_response_compound_all_of_local_var;
}


void ezsignannotation_response_compound_all_of_free(ezsignannotation_response_compound_all_of_t *ezsignannotation_response_compound_all_of) {
    if(NULL == ezsignannotation_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignannotation_response_compound_all_of->obj_textstylestatic) {
        textstylestatic_response_compound_free(ezsignannotation_response_compound_all_of->obj_textstylestatic);
        ezsignannotation_response_compound_all_of->obj_textstylestatic = NULL;
    }
    free(ezsignannotation_response_compound_all_of);
}

cJSON *ezsignannotation_response_compound_all_of_convertToJSON(ezsignannotation_response_compound_all_of_t *ezsignannotation_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignannotation_response_compound_all_of->obj_textstylestatic
    if(ezsignannotation_response_compound_all_of->obj_textstylestatic) {
    cJSON *obj_textstylestatic_local_JSON = textstylestatic_response_compound_convertToJSON(ezsignannotation_response_compound_all_of->obj_textstylestatic);
    if(obj_textstylestatic_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objTextstylestatic", obj_textstylestatic_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignannotation_response_compound_all_of_t *ezsignannotation_response_compound_all_of_parseFromJSON(cJSON *ezsignannotation_response_compound_all_ofJSON){

    ezsignannotation_response_compound_all_of_t *ezsignannotation_response_compound_all_of_local_var = NULL;

    // define the local variable for ezsignannotation_response_compound_all_of->obj_textstylestatic
    textstylestatic_response_compound_t *obj_textstylestatic_local_nonprim = NULL;

    // ezsignannotation_response_compound_all_of->obj_textstylestatic
    cJSON *obj_textstylestatic = cJSON_GetObjectItemCaseSensitive(ezsignannotation_response_compound_all_ofJSON, "objTextstylestatic");
    if (obj_textstylestatic) { 
    obj_textstylestatic_local_nonprim = textstylestatic_response_compound_parseFromJSON(obj_textstylestatic); //nonprimitive
    }


    ezsignannotation_response_compound_all_of_local_var = ezsignannotation_response_compound_all_of_create (
        obj_textstylestatic ? obj_textstylestatic_local_nonprim : NULL
        );

    return ezsignannotation_response_compound_all_of_local_var;
end:
    if (obj_textstylestatic_local_nonprim) {
        textstylestatic_response_compound_free(obj_textstylestatic_local_nonprim);
        obj_textstylestatic_local_nonprim = NULL;
    }
    return NULL;

}
