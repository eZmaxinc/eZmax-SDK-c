#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxcustomeruser_request_patch.h"



static ezmaxcustomeruser_request_patch_t *ezmaxcustomeruser_request_patch_create_internal(
    multilingual_ezmaxcustomeruser_note_t *obj_ezmaxcustomeruser_note
    ) {
    ezmaxcustomeruser_request_patch_t *ezmaxcustomeruser_request_patch_local_var = malloc(sizeof(ezmaxcustomeruser_request_patch_t));
    if (!ezmaxcustomeruser_request_patch_local_var) {
        return NULL;
    }
    memset(ezmaxcustomeruser_request_patch_local_var, 0, sizeof(ezmaxcustomeruser_request_patch_t));
    ezmaxcustomeruser_request_patch_local_var->_library_owned = 1;
    ezmaxcustomeruser_request_patch_local_var->obj_ezmaxcustomeruser_note = obj_ezmaxcustomeruser_note;
    return ezmaxcustomeruser_request_patch_local_var;
}

__attribute__((deprecated)) ezmaxcustomeruser_request_patch_t *ezmaxcustomeruser_request_patch_create(
    multilingual_ezmaxcustomeruser_note_t *obj_ezmaxcustomeruser_note
    ) {
    ezmaxcustomeruser_request_patch_t *result = ezmaxcustomeruser_request_patch_create_internal (
        obj_ezmaxcustomeruser_note
        );
    if (!result) {
    }
    return result;
}

void ezmaxcustomeruser_request_patch_free(ezmaxcustomeruser_request_patch_t *ezmaxcustomeruser_request_patch) {
    if(NULL == ezmaxcustomeruser_request_patch){
        return ;
    }
    if(ezmaxcustomeruser_request_patch->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxcustomeruser_request_patch_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxcustomeruser_request_patch->obj_ezmaxcustomeruser_note) {
        multilingual_ezmaxcustomeruser_note_free(ezmaxcustomeruser_request_patch->obj_ezmaxcustomeruser_note);
        ezmaxcustomeruser_request_patch->obj_ezmaxcustomeruser_note = NULL;
    }
    free(ezmaxcustomeruser_request_patch);
}

cJSON *ezmaxcustomeruser_request_patch_convertToJSON(ezmaxcustomeruser_request_patch_t *ezmaxcustomeruser_request_patch) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxcustomeruser_request_patch->obj_ezmaxcustomeruser_note
    if(ezmaxcustomeruser_request_patch->obj_ezmaxcustomeruser_note) {
    cJSON *obj_ezmaxcustomeruser_note_local_JSON = multilingual_ezmaxcustomeruser_note_convertToJSON(ezmaxcustomeruser_request_patch->obj_ezmaxcustomeruser_note);
    if(obj_ezmaxcustomeruser_note_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxcustomeruserNote", obj_ezmaxcustomeruser_note_local_JSON);
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

ezmaxcustomeruser_request_patch_t *ezmaxcustomeruser_request_patch_parseFromJSON(cJSON *ezmaxcustomeruser_request_patchJSON){

    ezmaxcustomeruser_request_patch_t *ezmaxcustomeruser_request_patch_local_var = NULL;

    // define the local variable for ezmaxcustomeruser_request_patch->obj_ezmaxcustomeruser_note
    multilingual_ezmaxcustomeruser_note_t *obj_ezmaxcustomeruser_note_local_nonprim = NULL;

    // ezmaxcustomeruser_request_patch->obj_ezmaxcustomeruser_note
    cJSON *obj_ezmaxcustomeruser_note = cJSON_GetObjectItemCaseSensitive(ezmaxcustomeruser_request_patchJSON, "objEzmaxcustomeruserNote");
    if (cJSON_IsNull(obj_ezmaxcustomeruser_note)) {
        obj_ezmaxcustomeruser_note = NULL;
    }
    if (obj_ezmaxcustomeruser_note) { 
    obj_ezmaxcustomeruser_note_local_nonprim = multilingual_ezmaxcustomeruser_note_parseFromJSON(obj_ezmaxcustomeruser_note); //nonprimitive
    }



    ezmaxcustomeruser_request_patch_local_var = ezmaxcustomeruser_request_patch_create_internal (
        obj_ezmaxcustomeruser_note ? obj_ezmaxcustomeruser_note_local_nonprim : NULL
        );

    if (!ezmaxcustomeruser_request_patch_local_var) {
        goto end;
    }

    return ezmaxcustomeruser_request_patch_local_var;
end:
    if (obj_ezmaxcustomeruser_note_local_nonprim) {
        multilingual_ezmaxcustomeruser_note_free(obj_ezmaxcustomeruser_note_local_nonprim);
        obj_ezmaxcustomeruser_note_local_nonprim = NULL;
    }
    return NULL;

}
