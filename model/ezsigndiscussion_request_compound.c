#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndiscussion_request_compound.h"



ezsigndiscussion_request_compound_t *ezsigndiscussion_request_compound_create(
    int pki_ezsigndiscussion_id,
    int fki_ezsigndocument_id,
    int i_ezsigndiscussion_pagenumber,
    int i_ezsigndiscussion_x,
    int i_ezsigndiscussion_y,
    discussion_request_t *obj_discussion
    ) {
    ezsigndiscussion_request_compound_t *ezsigndiscussion_request_compound_local_var = malloc(sizeof(ezsigndiscussion_request_compound_t));
    if (!ezsigndiscussion_request_compound_local_var) {
        return NULL;
    }
    ezsigndiscussion_request_compound_local_var->pki_ezsigndiscussion_id = pki_ezsigndiscussion_id;
    ezsigndiscussion_request_compound_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    ezsigndiscussion_request_compound_local_var->i_ezsigndiscussion_pagenumber = i_ezsigndiscussion_pagenumber;
    ezsigndiscussion_request_compound_local_var->i_ezsigndiscussion_x = i_ezsigndiscussion_x;
    ezsigndiscussion_request_compound_local_var->i_ezsigndiscussion_y = i_ezsigndiscussion_y;
    ezsigndiscussion_request_compound_local_var->obj_discussion = obj_discussion;

    return ezsigndiscussion_request_compound_local_var;
}


void ezsigndiscussion_request_compound_free(ezsigndiscussion_request_compound_t *ezsigndiscussion_request_compound) {
    if(NULL == ezsigndiscussion_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndiscussion_request_compound->obj_discussion) {
        discussion_request_free(ezsigndiscussion_request_compound->obj_discussion);
        ezsigndiscussion_request_compound->obj_discussion = NULL;
    }
    free(ezsigndiscussion_request_compound);
}

cJSON *ezsigndiscussion_request_compound_convertToJSON(ezsigndiscussion_request_compound_t *ezsigndiscussion_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndiscussion_request_compound->pki_ezsigndiscussion_id
    if(ezsigndiscussion_request_compound->pki_ezsigndiscussion_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigndiscussionID", ezsigndiscussion_request_compound->pki_ezsigndiscussion_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigndiscussion_request_compound->fki_ezsigndocument_id
    if (!ezsigndiscussion_request_compound->fki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", ezsigndiscussion_request_compound->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_request_compound->i_ezsigndiscussion_pagenumber
    if (!ezsigndiscussion_request_compound->i_ezsigndiscussion_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndiscussionPagenumber", ezsigndiscussion_request_compound->i_ezsigndiscussion_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_request_compound->i_ezsigndiscussion_x
    if (!ezsigndiscussion_request_compound->i_ezsigndiscussion_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndiscussionX", ezsigndiscussion_request_compound->i_ezsigndiscussion_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_request_compound->i_ezsigndiscussion_y
    if (!ezsigndiscussion_request_compound->i_ezsigndiscussion_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndiscussionY", ezsigndiscussion_request_compound->i_ezsigndiscussion_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_request_compound->obj_discussion
    if (!ezsigndiscussion_request_compound->obj_discussion) {
        goto fail;
    }
    cJSON *obj_discussion_local_JSON = discussion_request_convertToJSON(ezsigndiscussion_request_compound->obj_discussion);
    if(obj_discussion_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDiscussion", obj_discussion_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndiscussion_request_compound_t *ezsigndiscussion_request_compound_parseFromJSON(cJSON *ezsigndiscussion_request_compoundJSON){

    ezsigndiscussion_request_compound_t *ezsigndiscussion_request_compound_local_var = NULL;

    // define the local variable for ezsigndiscussion_request_compound->obj_discussion
    discussion_request_t *obj_discussion_local_nonprim = NULL;

    // ezsigndiscussion_request_compound->pki_ezsigndiscussion_id
    cJSON *pki_ezsigndiscussion_id = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_request_compoundJSON, "pkiEzsigndiscussionID");
    if (pki_ezsigndiscussion_id) { 
    if(!cJSON_IsNumber(pki_ezsigndiscussion_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigndiscussion_request_compound->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_request_compoundJSON, "fkiEzsigndocumentID");
    if (!fki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigndocument_id))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_request_compound->i_ezsigndiscussion_pagenumber
    cJSON *i_ezsigndiscussion_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_request_compoundJSON, "iEzsigndiscussionPagenumber");
    if (!i_ezsigndiscussion_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndiscussion_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_request_compound->i_ezsigndiscussion_x
    cJSON *i_ezsigndiscussion_x = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_request_compoundJSON, "iEzsigndiscussionX");
    if (!i_ezsigndiscussion_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndiscussion_x))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_request_compound->i_ezsigndiscussion_y
    cJSON *i_ezsigndiscussion_y = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_request_compoundJSON, "iEzsigndiscussionY");
    if (!i_ezsigndiscussion_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndiscussion_y))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_request_compound->obj_discussion
    cJSON *obj_discussion = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_request_compoundJSON, "objDiscussion");
    if (!obj_discussion) {
        goto end;
    }

    
    obj_discussion_local_nonprim = discussion_request_parseFromJSON(obj_discussion); //nonprimitive


    ezsigndiscussion_request_compound_local_var = ezsigndiscussion_request_compound_create (
        pki_ezsigndiscussion_id ? pki_ezsigndiscussion_id->valuedouble : 0,
        fki_ezsigndocument_id->valuedouble,
        i_ezsigndiscussion_pagenumber->valuedouble,
        i_ezsigndiscussion_x->valuedouble,
        i_ezsigndiscussion_y->valuedouble,
        obj_discussion_local_nonprim
        );

    return ezsigndiscussion_request_compound_local_var;
end:
    if (obj_discussion_local_nonprim) {
        discussion_request_free(obj_discussion_local_nonprim);
        obj_discussion_local_nonprim = NULL;
    }
    return NULL;

}
