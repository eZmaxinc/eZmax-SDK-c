#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_import_ezsigntemplatepackage_relation_request.h"



custom_import_ezsigntemplatepackage_relation_request_t *custom_import_ezsigntemplatepackage_relation_request_create(
    int fki_ezsigntemplatepackagesigner_id,
    int fki_ezsignfoldersignerassociation_id,
    char *s_ezsigntemplatepackagesigner_description
    ) {
    custom_import_ezsigntemplatepackage_relation_request_t *custom_import_ezsigntemplatepackage_relation_request_local_var = malloc(sizeof(custom_import_ezsigntemplatepackage_relation_request_t));
    if (!custom_import_ezsigntemplatepackage_relation_request_local_var) {
        return NULL;
    }
    custom_import_ezsigntemplatepackage_relation_request_local_var->fki_ezsigntemplatepackagesigner_id = fki_ezsigntemplatepackagesigner_id;
    custom_import_ezsigntemplatepackage_relation_request_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    custom_import_ezsigntemplatepackage_relation_request_local_var->s_ezsigntemplatepackagesigner_description = s_ezsigntemplatepackagesigner_description;

    return custom_import_ezsigntemplatepackage_relation_request_local_var;
}


void custom_import_ezsigntemplatepackage_relation_request_free(custom_import_ezsigntemplatepackage_relation_request_t *custom_import_ezsigntemplatepackage_relation_request) {
    if(NULL == custom_import_ezsigntemplatepackage_relation_request){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_import_ezsigntemplatepackage_relation_request->s_ezsigntemplatepackagesigner_description) {
        free(custom_import_ezsigntemplatepackage_relation_request->s_ezsigntemplatepackagesigner_description);
        custom_import_ezsigntemplatepackage_relation_request->s_ezsigntemplatepackagesigner_description = NULL;
    }
    free(custom_import_ezsigntemplatepackage_relation_request);
}

cJSON *custom_import_ezsigntemplatepackage_relation_request_convertToJSON(custom_import_ezsigntemplatepackage_relation_request_t *custom_import_ezsigntemplatepackage_relation_request) {
    cJSON *item = cJSON_CreateObject();

    // custom_import_ezsigntemplatepackage_relation_request->fki_ezsigntemplatepackagesigner_id
    if(custom_import_ezsigntemplatepackage_relation_request->fki_ezsigntemplatepackagesigner_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackagesignerID", custom_import_ezsigntemplatepackage_relation_request->fki_ezsigntemplatepackagesigner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_import_ezsigntemplatepackage_relation_request->fki_ezsignfoldersignerassociation_id
    if (!custom_import_ezsigntemplatepackage_relation_request->fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationID", custom_import_ezsigntemplatepackage_relation_request->fki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_import_ezsigntemplatepackage_relation_request->s_ezsigntemplatepackagesigner_description
    if(custom_import_ezsigntemplatepackage_relation_request->s_ezsigntemplatepackagesigner_description) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepackagesignerDescription", custom_import_ezsigntemplatepackage_relation_request->s_ezsigntemplatepackagesigner_description) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_import_ezsigntemplatepackage_relation_request_t *custom_import_ezsigntemplatepackage_relation_request_parseFromJSON(cJSON *custom_import_ezsigntemplatepackage_relation_requestJSON){

    custom_import_ezsigntemplatepackage_relation_request_t *custom_import_ezsigntemplatepackage_relation_request_local_var = NULL;

    // custom_import_ezsigntemplatepackage_relation_request->fki_ezsigntemplatepackagesigner_id
    cJSON *fki_ezsigntemplatepackagesigner_id = cJSON_GetObjectItemCaseSensitive(custom_import_ezsigntemplatepackage_relation_requestJSON, "fkiEzsigntemplatepackagesignerID");
    if (fki_ezsigntemplatepackagesigner_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatepackagesigner_id))
    {
    goto end; //Numeric
    }
    }

    // custom_import_ezsigntemplatepackage_relation_request->fki_ezsignfoldersignerassociation_id
    cJSON *fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(custom_import_ezsigntemplatepackage_relation_requestJSON, "fkiEzsignfoldersignerassociationID");
    if (!fki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }

    // custom_import_ezsigntemplatepackage_relation_request->s_ezsigntemplatepackagesigner_description
    cJSON *s_ezsigntemplatepackagesigner_description = cJSON_GetObjectItemCaseSensitive(custom_import_ezsigntemplatepackage_relation_requestJSON, "sEzsigntemplatepackagesignerDescription");
    if (s_ezsigntemplatepackagesigner_description) { 
    if(!cJSON_IsString(s_ezsigntemplatepackagesigner_description) && !cJSON_IsNull(s_ezsigntemplatepackagesigner_description))
    {
    goto end; //String
    }
    }


    custom_import_ezsigntemplatepackage_relation_request_local_var = custom_import_ezsigntemplatepackage_relation_request_create (
        fki_ezsigntemplatepackagesigner_id ? fki_ezsigntemplatepackagesigner_id->valuedouble : 0,
        fki_ezsignfoldersignerassociation_id->valuedouble,
        s_ezsigntemplatepackagesigner_description && !cJSON_IsNull(s_ezsigntemplatepackagesigner_description) ? strdup(s_ezsigntemplatepackagesigner_description->valuestring) : NULL
        );

    return custom_import_ezsigntemplatepackage_relation_request_local_var;
end:
    return NULL;

}
