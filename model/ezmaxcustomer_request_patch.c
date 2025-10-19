#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxcustomer_request_patch.h"



static ezmaxcustomer_request_patch_t *ezmaxcustomer_request_patch_create_internal(
    multilingual_ezmaxcustomer_note_t *obj_ezmaxcustomer_note
    ) {
    ezmaxcustomer_request_patch_t *ezmaxcustomer_request_patch_local_var = malloc(sizeof(ezmaxcustomer_request_patch_t));
    if (!ezmaxcustomer_request_patch_local_var) {
        return NULL;
    }
    ezmaxcustomer_request_patch_local_var->obj_ezmaxcustomer_note = obj_ezmaxcustomer_note;

    ezmaxcustomer_request_patch_local_var->_library_owned = 1;
    return ezmaxcustomer_request_patch_local_var;
}

__attribute__((deprecated)) ezmaxcustomer_request_patch_t *ezmaxcustomer_request_patch_create(
    multilingual_ezmaxcustomer_note_t *obj_ezmaxcustomer_note
    ) {
    return ezmaxcustomer_request_patch_create_internal (
        obj_ezmaxcustomer_note
        );
}

void ezmaxcustomer_request_patch_free(ezmaxcustomer_request_patch_t *ezmaxcustomer_request_patch) {
    if(NULL == ezmaxcustomer_request_patch){
        return ;
    }
    if(ezmaxcustomer_request_patch->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxcustomer_request_patch_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxcustomer_request_patch->obj_ezmaxcustomer_note) {
        multilingual_ezmaxcustomer_note_free(ezmaxcustomer_request_patch->obj_ezmaxcustomer_note);
        ezmaxcustomer_request_patch->obj_ezmaxcustomer_note = NULL;
    }
    free(ezmaxcustomer_request_patch);
}

cJSON *ezmaxcustomer_request_patch_convertToJSON(ezmaxcustomer_request_patch_t *ezmaxcustomer_request_patch) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxcustomer_request_patch->obj_ezmaxcustomer_note
    if(ezmaxcustomer_request_patch->obj_ezmaxcustomer_note) {
    cJSON *obj_ezmaxcustomer_note_local_JSON = multilingual_ezmaxcustomer_note_convertToJSON(ezmaxcustomer_request_patch->obj_ezmaxcustomer_note);
    if(obj_ezmaxcustomer_note_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxcustomerNote", obj_ezmaxcustomer_note_local_JSON);
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

ezmaxcustomer_request_patch_t *ezmaxcustomer_request_patch_parseFromJSON(cJSON *ezmaxcustomer_request_patchJSON){

    ezmaxcustomer_request_patch_t *ezmaxcustomer_request_patch_local_var = NULL;

    // define the local variable for ezmaxcustomer_request_patch->obj_ezmaxcustomer_note
    multilingual_ezmaxcustomer_note_t *obj_ezmaxcustomer_note_local_nonprim = NULL;

    // ezmaxcustomer_request_patch->obj_ezmaxcustomer_note
    cJSON *obj_ezmaxcustomer_note = cJSON_GetObjectItemCaseSensitive(ezmaxcustomer_request_patchJSON, "objEzmaxcustomerNote");
    if (cJSON_IsNull(obj_ezmaxcustomer_note)) {
        obj_ezmaxcustomer_note = NULL;
    }
    if (obj_ezmaxcustomer_note) { 
    obj_ezmaxcustomer_note_local_nonprim = multilingual_ezmaxcustomer_note_parseFromJSON(obj_ezmaxcustomer_note); //nonprimitive
    }


    ezmaxcustomer_request_patch_local_var = ezmaxcustomer_request_patch_create_internal (
        obj_ezmaxcustomer_note ? obj_ezmaxcustomer_note_local_nonprim : NULL
        );

    return ezmaxcustomer_request_patch_local_var;
end:
    if (obj_ezmaxcustomer_note_local_nonprim) {
        multilingual_ezmaxcustomer_note_free(obj_ezmaxcustomer_note_local_nonprim);
        obj_ezmaxcustomer_note_local_nonprim = NULL;
    }
    return NULL;

}
