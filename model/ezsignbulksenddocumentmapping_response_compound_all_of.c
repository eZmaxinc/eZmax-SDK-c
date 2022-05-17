#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksenddocumentmapping_response_compound_all_of.h"



ezsignbulksenddocumentmapping_response_compound_all_of_t *ezsignbulksenddocumentmapping_response_compound_all_of_create(
    ezsigntemplate_response_compound_t *obj_ezsigntemplate,
    ezsigntemplatepackage_response_compound_t *obj_ezsigntemplatepackage
    ) {
    ezsignbulksenddocumentmapping_response_compound_all_of_t *ezsignbulksenddocumentmapping_response_compound_all_of_local_var = malloc(sizeof(ezsignbulksenddocumentmapping_response_compound_all_of_t));
    if (!ezsignbulksenddocumentmapping_response_compound_all_of_local_var) {
        return NULL;
    }
    ezsignbulksenddocumentmapping_response_compound_all_of_local_var->obj_ezsigntemplate = obj_ezsigntemplate;
    ezsignbulksenddocumentmapping_response_compound_all_of_local_var->obj_ezsigntemplatepackage = obj_ezsigntemplatepackage;

    return ezsignbulksenddocumentmapping_response_compound_all_of_local_var;
}


void ezsignbulksenddocumentmapping_response_compound_all_of_free(ezsignbulksenddocumentmapping_response_compound_all_of_t *ezsignbulksenddocumentmapping_response_compound_all_of) {
    if(NULL == ezsignbulksenddocumentmapping_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksenddocumentmapping_response_compound_all_of->obj_ezsigntemplate) {
        ezsigntemplate_response_compound_free(ezsignbulksenddocumentmapping_response_compound_all_of->obj_ezsigntemplate);
        ezsignbulksenddocumentmapping_response_compound_all_of->obj_ezsigntemplate = NULL;
    }
    if (ezsignbulksenddocumentmapping_response_compound_all_of->obj_ezsigntemplatepackage) {
        ezsigntemplatepackage_response_compound_free(ezsignbulksenddocumentmapping_response_compound_all_of->obj_ezsigntemplatepackage);
        ezsignbulksenddocumentmapping_response_compound_all_of->obj_ezsigntemplatepackage = NULL;
    }
    free(ezsignbulksenddocumentmapping_response_compound_all_of);
}

cJSON *ezsignbulksenddocumentmapping_response_compound_all_of_convertToJSON(ezsignbulksenddocumentmapping_response_compound_all_of_t *ezsignbulksenddocumentmapping_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksenddocumentmapping_response_compound_all_of->obj_ezsigntemplate
    if(ezsignbulksenddocumentmapping_response_compound_all_of->obj_ezsigntemplate) {
    cJSON *obj_ezsigntemplate_local_JSON = ezsigntemplate_response_compound_convertToJSON(ezsignbulksenddocumentmapping_response_compound_all_of->obj_ezsigntemplate);
    if(obj_ezsigntemplate_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplate", obj_ezsigntemplate_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignbulksenddocumentmapping_response_compound_all_of->obj_ezsigntemplatepackage
    if(ezsignbulksenddocumentmapping_response_compound_all_of->obj_ezsigntemplatepackage) {
    cJSON *obj_ezsigntemplatepackage_local_JSON = ezsigntemplatepackage_response_compound_convertToJSON(ezsignbulksenddocumentmapping_response_compound_all_of->obj_ezsigntemplatepackage);
    if(obj_ezsigntemplatepackage_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatepackage", obj_ezsigntemplatepackage_local_JSON);
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

ezsignbulksenddocumentmapping_response_compound_all_of_t *ezsignbulksenddocumentmapping_response_compound_all_of_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_response_compound_all_ofJSON){

    ezsignbulksenddocumentmapping_response_compound_all_of_t *ezsignbulksenddocumentmapping_response_compound_all_of_local_var = NULL;

    // define the local variable for ezsignbulksenddocumentmapping_response_compound_all_of->obj_ezsigntemplate
    ezsigntemplate_response_compound_t *obj_ezsigntemplate_local_nonprim = NULL;

    // define the local variable for ezsignbulksenddocumentmapping_response_compound_all_of->obj_ezsigntemplatepackage
    ezsigntemplatepackage_response_compound_t *obj_ezsigntemplatepackage_local_nonprim = NULL;

    // ezsignbulksenddocumentmapping_response_compound_all_of->obj_ezsigntemplate
    cJSON *obj_ezsigntemplate = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_response_compound_all_ofJSON, "objEzsigntemplate");
    if (obj_ezsigntemplate) { 
    obj_ezsigntemplate_local_nonprim = ezsigntemplate_response_compound_parseFromJSON(obj_ezsigntemplate); //nonprimitive
    }

    // ezsignbulksenddocumentmapping_response_compound_all_of->obj_ezsigntemplatepackage
    cJSON *obj_ezsigntemplatepackage = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_response_compound_all_ofJSON, "objEzsigntemplatepackage");
    if (obj_ezsigntemplatepackage) { 
    obj_ezsigntemplatepackage_local_nonprim = ezsigntemplatepackage_response_compound_parseFromJSON(obj_ezsigntemplatepackage); //nonprimitive
    }


    ezsignbulksenddocumentmapping_response_compound_all_of_local_var = ezsignbulksenddocumentmapping_response_compound_all_of_create (
        obj_ezsigntemplate ? obj_ezsigntemplate_local_nonprim : NULL,
        obj_ezsigntemplatepackage ? obj_ezsigntemplatepackage_local_nonprim : NULL
        );

    return ezsignbulksenddocumentmapping_response_compound_all_of_local_var;
end:
    if (obj_ezsigntemplate_local_nonprim) {
        ezsigntemplate_response_compound_free(obj_ezsigntemplate_local_nonprim);
        obj_ezsigntemplate_local_nonprim = NULL;
    }
    if (obj_ezsigntemplatepackage_local_nonprim) {
        ezsigntemplatepackage_response_compound_free(obj_ezsigntemplatepackage_local_nonprim);
        obj_ezsigntemplatepackage_local_nonprim = NULL;
    }
    return NULL;

}
