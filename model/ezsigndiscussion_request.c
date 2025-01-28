#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndiscussion_request.h"



static ezsigndiscussion_request_t *ezsigndiscussion_request_create_internal(
    int pki_ezsigndiscussion_id,
    int fki_ezsigndocument_id,
    int i_ezsigndiscussion_pagenumber,
    int i_ezsigndiscussion_x,
    int i_ezsigndiscussion_y,
    discussion_request_t *obj_discussion
    ) {
    ezsigndiscussion_request_t *ezsigndiscussion_request_local_var = malloc(sizeof(ezsigndiscussion_request_t));
    if (!ezsigndiscussion_request_local_var) {
        return NULL;
    }
    ezsigndiscussion_request_local_var->pki_ezsigndiscussion_id = pki_ezsigndiscussion_id;
    ezsigndiscussion_request_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    ezsigndiscussion_request_local_var->i_ezsigndiscussion_pagenumber = i_ezsigndiscussion_pagenumber;
    ezsigndiscussion_request_local_var->i_ezsigndiscussion_x = i_ezsigndiscussion_x;
    ezsigndiscussion_request_local_var->i_ezsigndiscussion_y = i_ezsigndiscussion_y;
    ezsigndiscussion_request_local_var->obj_discussion = obj_discussion;

    ezsigndiscussion_request_local_var->_library_owned = 1;
    return ezsigndiscussion_request_local_var;
}

__attribute__((deprecated)) ezsigndiscussion_request_t *ezsigndiscussion_request_create(
    int pki_ezsigndiscussion_id,
    int fki_ezsigndocument_id,
    int i_ezsigndiscussion_pagenumber,
    int i_ezsigndiscussion_x,
    int i_ezsigndiscussion_y,
    discussion_request_t *obj_discussion
    ) {
    return ezsigndiscussion_request_create_internal (
        pki_ezsigndiscussion_id,
        fki_ezsigndocument_id,
        i_ezsigndiscussion_pagenumber,
        i_ezsigndiscussion_x,
        i_ezsigndiscussion_y,
        obj_discussion
        );
}

void ezsigndiscussion_request_free(ezsigndiscussion_request_t *ezsigndiscussion_request) {
    if(NULL == ezsigndiscussion_request){
        return ;
    }
    if(ezsigndiscussion_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndiscussion_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndiscussion_request->obj_discussion) {
        discussion_request_free(ezsigndiscussion_request->obj_discussion);
        ezsigndiscussion_request->obj_discussion = NULL;
    }
    free(ezsigndiscussion_request);
}

cJSON *ezsigndiscussion_request_convertToJSON(ezsigndiscussion_request_t *ezsigndiscussion_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndiscussion_request->pki_ezsigndiscussion_id
    if(ezsigndiscussion_request->pki_ezsigndiscussion_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigndiscussionID", ezsigndiscussion_request->pki_ezsigndiscussion_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigndiscussion_request->fki_ezsigndocument_id
    if (!ezsigndiscussion_request->fki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", ezsigndiscussion_request->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_request->i_ezsigndiscussion_pagenumber
    if (!ezsigndiscussion_request->i_ezsigndiscussion_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndiscussionPagenumber", ezsigndiscussion_request->i_ezsigndiscussion_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_request->i_ezsigndiscussion_x
    if (!ezsigndiscussion_request->i_ezsigndiscussion_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndiscussionX", ezsigndiscussion_request->i_ezsigndiscussion_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_request->i_ezsigndiscussion_y
    if (!ezsigndiscussion_request->i_ezsigndiscussion_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndiscussionY", ezsigndiscussion_request->i_ezsigndiscussion_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndiscussion_request->obj_discussion
    if (!ezsigndiscussion_request->obj_discussion) {
        goto fail;
    }
    cJSON *obj_discussion_local_JSON = discussion_request_convertToJSON(ezsigndiscussion_request->obj_discussion);
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

ezsigndiscussion_request_t *ezsigndiscussion_request_parseFromJSON(cJSON *ezsigndiscussion_requestJSON){

    ezsigndiscussion_request_t *ezsigndiscussion_request_local_var = NULL;

    // define the local variable for ezsigndiscussion_request->obj_discussion
    discussion_request_t *obj_discussion_local_nonprim = NULL;

    // ezsigndiscussion_request->pki_ezsigndiscussion_id
    cJSON *pki_ezsigndiscussion_id = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_requestJSON, "pkiEzsigndiscussionID");
    if (cJSON_IsNull(pki_ezsigndiscussion_id)) {
        pki_ezsigndiscussion_id = NULL;
    }
    if (pki_ezsigndiscussion_id) { 
    if(!cJSON_IsNumber(pki_ezsigndiscussion_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigndiscussion_request->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_requestJSON, "fkiEzsigndocumentID");
    if (cJSON_IsNull(fki_ezsigndocument_id)) {
        fki_ezsigndocument_id = NULL;
    }
    if (!fki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigndocument_id))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_request->i_ezsigndiscussion_pagenumber
    cJSON *i_ezsigndiscussion_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_requestJSON, "iEzsigndiscussionPagenumber");
    if (cJSON_IsNull(i_ezsigndiscussion_pagenumber)) {
        i_ezsigndiscussion_pagenumber = NULL;
    }
    if (!i_ezsigndiscussion_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndiscussion_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_request->i_ezsigndiscussion_x
    cJSON *i_ezsigndiscussion_x = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_requestJSON, "iEzsigndiscussionX");
    if (cJSON_IsNull(i_ezsigndiscussion_x)) {
        i_ezsigndiscussion_x = NULL;
    }
    if (!i_ezsigndiscussion_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndiscussion_x))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_request->i_ezsigndiscussion_y
    cJSON *i_ezsigndiscussion_y = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_requestJSON, "iEzsigndiscussionY");
    if (cJSON_IsNull(i_ezsigndiscussion_y)) {
        i_ezsigndiscussion_y = NULL;
    }
    if (!i_ezsigndiscussion_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndiscussion_y))
    {
    goto end; //Numeric
    }

    // ezsigndiscussion_request->obj_discussion
    cJSON *obj_discussion = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_requestJSON, "objDiscussion");
    if (cJSON_IsNull(obj_discussion)) {
        obj_discussion = NULL;
    }
    if (!obj_discussion) {
        goto end;
    }

    
    obj_discussion_local_nonprim = discussion_request_parseFromJSON(obj_discussion); //nonprimitive


    ezsigndiscussion_request_local_var = ezsigndiscussion_request_create_internal (
        pki_ezsigndiscussion_id ? pki_ezsigndiscussion_id->valuedouble : 0,
        fki_ezsigndocument_id->valuedouble,
        i_ezsigndiscussion_pagenumber->valuedouble,
        i_ezsigndiscussion_x->valuedouble,
        i_ezsigndiscussion_y->valuedouble,
        obj_discussion_local_nonprim
        );

    return ezsigndiscussion_request_local_var;
end:
    if (obj_discussion_local_nonprim) {
        discussion_request_free(obj_discussion_local_nonprim);
        obj_discussion_local_nonprim = NULL;
    }
    return NULL;

}
