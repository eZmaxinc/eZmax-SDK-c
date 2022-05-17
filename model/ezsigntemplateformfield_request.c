#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateformfield_request.h"



ezsigntemplateformfield_request_t *ezsigntemplateformfield_request_create(
    int pki_ezsigntemplateformfield_id,
    int i_ezsigntemplatedocumentpage_pagenumber,
    char *s_ezsigntemplateformfield_label,
    char *s_ezsigntemplateformfield_value,
    int i_ezsigntemplateformfield_x,
    int i_ezsigntemplateformfield_y,
    int i_ezsigntemplateformfield_width,
    int i_ezsigntemplateformfield_height,
    int b_ezsigntemplateformfield_selected
    ) {
    ezsigntemplateformfield_request_t *ezsigntemplateformfield_request_local_var = malloc(sizeof(ezsigntemplateformfield_request_t));
    if (!ezsigntemplateformfield_request_local_var) {
        return NULL;
    }
    ezsigntemplateformfield_request_local_var->pki_ezsigntemplateformfield_id = pki_ezsigntemplateformfield_id;
    ezsigntemplateformfield_request_local_var->i_ezsigntemplatedocumentpage_pagenumber = i_ezsigntemplatedocumentpage_pagenumber;
    ezsigntemplateformfield_request_local_var->s_ezsigntemplateformfield_label = s_ezsigntemplateformfield_label;
    ezsigntemplateformfield_request_local_var->s_ezsigntemplateformfield_value = s_ezsigntemplateformfield_value;
    ezsigntemplateformfield_request_local_var->i_ezsigntemplateformfield_x = i_ezsigntemplateformfield_x;
    ezsigntemplateformfield_request_local_var->i_ezsigntemplateformfield_y = i_ezsigntemplateformfield_y;
    ezsigntemplateformfield_request_local_var->i_ezsigntemplateformfield_width = i_ezsigntemplateformfield_width;
    ezsigntemplateformfield_request_local_var->i_ezsigntemplateformfield_height = i_ezsigntemplateformfield_height;
    ezsigntemplateformfield_request_local_var->b_ezsigntemplateformfield_selected = b_ezsigntemplateformfield_selected;

    return ezsigntemplateformfield_request_local_var;
}


void ezsigntemplateformfield_request_free(ezsigntemplateformfield_request_t *ezsigntemplateformfield_request) {
    if(NULL == ezsigntemplateformfield_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateformfield_request->s_ezsigntemplateformfield_label) {
        free(ezsigntemplateformfield_request->s_ezsigntemplateformfield_label);
        ezsigntemplateformfield_request->s_ezsigntemplateformfield_label = NULL;
    }
    if (ezsigntemplateformfield_request->s_ezsigntemplateformfield_value) {
        free(ezsigntemplateformfield_request->s_ezsigntemplateformfield_value);
        ezsigntemplateformfield_request->s_ezsigntemplateformfield_value = NULL;
    }
    free(ezsigntemplateformfield_request);
}

cJSON *ezsigntemplateformfield_request_convertToJSON(ezsigntemplateformfield_request_t *ezsigntemplateformfield_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateformfield_request->pki_ezsigntemplateformfield_id
    if(ezsigntemplateformfield_request->pki_ezsigntemplateformfield_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateformfieldID", ezsigntemplateformfield_request->pki_ezsigntemplateformfield_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateformfield_request->i_ezsigntemplatedocumentpage_pagenumber
    if (!ezsigntemplateformfield_request->i_ezsigntemplatedocumentpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagePagenumber", ezsigntemplateformfield_request->i_ezsigntemplatedocumentpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfield_request->s_ezsigntemplateformfield_label
    if (!ezsigntemplateformfield_request->s_ezsigntemplateformfield_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateformfieldLabel", ezsigntemplateformfield_request->s_ezsigntemplateformfield_label) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateformfield_request->s_ezsigntemplateformfield_value
    if(ezsigntemplateformfield_request->s_ezsigntemplateformfield_value) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateformfieldValue", ezsigntemplateformfield_request->s_ezsigntemplateformfield_value) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateformfield_request->i_ezsigntemplateformfield_x
    if (!ezsigntemplateformfield_request->i_ezsigntemplateformfield_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldX", ezsigntemplateformfield_request->i_ezsigntemplateformfield_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfield_request->i_ezsigntemplateformfield_y
    if (!ezsigntemplateformfield_request->i_ezsigntemplateformfield_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldY", ezsigntemplateformfield_request->i_ezsigntemplateformfield_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfield_request->i_ezsigntemplateformfield_width
    if (!ezsigntemplateformfield_request->i_ezsigntemplateformfield_width) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldWidth", ezsigntemplateformfield_request->i_ezsigntemplateformfield_width) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfield_request->i_ezsigntemplateformfield_height
    if (!ezsigntemplateformfield_request->i_ezsigntemplateformfield_height) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldHeight", ezsigntemplateformfield_request->i_ezsigntemplateformfield_height) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfield_request->b_ezsigntemplateformfield_selected
    if(ezsigntemplateformfield_request->b_ezsigntemplateformfield_selected) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateformfieldSelected", ezsigntemplateformfield_request->b_ezsigntemplateformfield_selected) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateformfield_request_t *ezsigntemplateformfield_request_parseFromJSON(cJSON *ezsigntemplateformfield_requestJSON){

    ezsigntemplateformfield_request_t *ezsigntemplateformfield_request_local_var = NULL;

    // ezsigntemplateformfield_request->pki_ezsigntemplateformfield_id
    cJSON *pki_ezsigntemplateformfield_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "pkiEzsigntemplateformfieldID");
    if (pki_ezsigntemplateformfield_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplateformfield_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateformfield_request->i_ezsigntemplatedocumentpage_pagenumber
    cJSON *i_ezsigntemplatedocumentpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "iEzsigntemplatedocumentpagePagenumber");
    if (!i_ezsigntemplatedocumentpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpage_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfield_request->s_ezsigntemplateformfield_label
    cJSON *s_ezsigntemplateformfield_label = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "sEzsigntemplateformfieldLabel");
    if (!s_ezsigntemplateformfield_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateformfield_label))
    {
    goto end; //String
    }

    // ezsigntemplateformfield_request->s_ezsigntemplateformfield_value
    cJSON *s_ezsigntemplateformfield_value = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "sEzsigntemplateformfieldValue");
    if (s_ezsigntemplateformfield_value) { 
    if(!cJSON_IsString(s_ezsigntemplateformfield_value))
    {
    goto end; //String
    }
    }

    // ezsigntemplateformfield_request->i_ezsigntemplateformfield_x
    cJSON *i_ezsigntemplateformfield_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "iEzsigntemplateformfieldX");
    if (!i_ezsigntemplateformfield_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfield_x))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfield_request->i_ezsigntemplateformfield_y
    cJSON *i_ezsigntemplateformfield_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "iEzsigntemplateformfieldY");
    if (!i_ezsigntemplateformfield_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfield_y))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfield_request->i_ezsigntemplateformfield_width
    cJSON *i_ezsigntemplateformfield_width = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "iEzsigntemplateformfieldWidth");
    if (!i_ezsigntemplateformfield_width) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfield_width))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfield_request->i_ezsigntemplateformfield_height
    cJSON *i_ezsigntemplateformfield_height = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "iEzsigntemplateformfieldHeight");
    if (!i_ezsigntemplateformfield_height) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfield_height))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfield_request->b_ezsigntemplateformfield_selected
    cJSON *b_ezsigntemplateformfield_selected = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "bEzsigntemplateformfieldSelected");
    if (b_ezsigntemplateformfield_selected) { 
    if(!cJSON_IsBool(b_ezsigntemplateformfield_selected))
    {
    goto end; //Bool
    }
    }


    ezsigntemplateformfield_request_local_var = ezsigntemplateformfield_request_create (
        pki_ezsigntemplateformfield_id ? pki_ezsigntemplateformfield_id->valuedouble : 0,
        i_ezsigntemplatedocumentpage_pagenumber->valuedouble,
        strdup(s_ezsigntemplateformfield_label->valuestring),
        s_ezsigntemplateformfield_value ? strdup(s_ezsigntemplateformfield_value->valuestring) : NULL,
        i_ezsigntemplateformfield_x->valuedouble,
        i_ezsigntemplateformfield_y->valuedouble,
        i_ezsigntemplateformfield_width->valuedouble,
        i_ezsigntemplateformfield_height->valuedouble,
        b_ezsigntemplateformfield_selected ? b_ezsigntemplateformfield_selected->valueint : 0
        );

    return ezsigntemplateformfield_request_local_var;
end:
    return NULL;

}
