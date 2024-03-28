#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateformfield_request.h"


char* ezsigntemplateformfield_request_e_ezsigntemplateformfield_positioning_ToString(ezmax_api_definition__full_ezsigntemplateformfield_request__e e_ezsigntemplateformfield_positioning) {
    char* e_ezsigntemplateformfield_positioningArray[] =  { "NULL", "PerCoordinates", "PerPositioningPattern" };
    return e_ezsigntemplateformfield_positioningArray[e_ezsigntemplateformfield_positioning];
}

ezmax_api_definition__full_ezsigntemplateformfield_request__e ezsigntemplateformfield_request_e_ezsigntemplateformfield_positioning_FromString(char* e_ezsigntemplateformfield_positioning){
    int stringToReturn = 0;
    char *e_ezsigntemplateformfield_positioningArray[] =  { "NULL", "PerCoordinates", "PerPositioningPattern" };
    size_t sizeofArray = sizeof(e_ezsigntemplateformfield_positioningArray) / sizeof(e_ezsigntemplateformfield_positioningArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplateformfield_positioning, e_ezsigntemplateformfield_positioningArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* ezsigntemplateformfield_request_e_ezsigntemplateformfield_dependencyrequirement_ToString(ezmax_api_definition__full_ezsigntemplateformfield_request__e e_ezsigntemplateformfield_dependencyrequirement) {
    char* e_ezsigntemplateformfield_dependencyrequirementArray[] =  { "NULL", "AllOf", "AnyOf" };
    return e_ezsigntemplateformfield_dependencyrequirementArray[e_ezsigntemplateformfield_dependencyrequirement];
}

ezmax_api_definition__full_ezsigntemplateformfield_request__e ezsigntemplateformfield_request_e_ezsigntemplateformfield_dependencyrequirement_FromString(char* e_ezsigntemplateformfield_dependencyrequirement){
    int stringToReturn = 0;
    char *e_ezsigntemplateformfield_dependencyrequirementArray[] =  { "NULL", "AllOf", "AnyOf" };
    size_t sizeofArray = sizeof(e_ezsigntemplateformfield_dependencyrequirementArray) / sizeof(e_ezsigntemplateformfield_dependencyrequirementArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplateformfield_dependencyrequirement, e_ezsigntemplateformfield_dependencyrequirementArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* ezsigntemplateformfield_request_e_ezsigntemplateformfield_positioningoccurence_ToString(ezmax_api_definition__full_ezsigntemplateformfield_request__e e_ezsigntemplateformfield_positioningoccurence) {
    char* e_ezsigntemplateformfield_positioningoccurenceArray[] =  { "NULL", "All", "First", "Last" };
    return e_ezsigntemplateformfield_positioningoccurenceArray[e_ezsigntemplateformfield_positioningoccurence];
}

ezmax_api_definition__full_ezsigntemplateformfield_request__e ezsigntemplateformfield_request_e_ezsigntemplateformfield_positioningoccurence_FromString(char* e_ezsigntemplateformfield_positioningoccurence){
    int stringToReturn = 0;
    char *e_ezsigntemplateformfield_positioningoccurenceArray[] =  { "NULL", "All", "First", "Last" };
    size_t sizeofArray = sizeof(e_ezsigntemplateformfield_positioningoccurenceArray) / sizeof(e_ezsigntemplateformfield_positioningoccurenceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplateformfield_positioningoccurence, e_ezsigntemplateformfield_positioningoccurenceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigntemplateformfield_request_t *ezsigntemplateformfield_request_create(
    int pki_ezsigntemplateformfield_id,
    field_e_ezsigntemplateformfield_positioning_t *e_ezsigntemplateformfield_positioning,
    int i_ezsigntemplatedocumentpage_pagenumber,
    char *s_ezsigntemplateformfield_label,
    char *s_ezsigntemplateformfield_value,
    int i_ezsigntemplateformfield_x,
    int i_ezsigntemplateformfield_y,
    int i_ezsigntemplateformfield_width,
    int i_ezsigntemplateformfield_height,
    int b_ezsigntemplateformfield_autocomplete,
    int b_ezsigntemplateformfield_selected,
    field_e_ezsigntemplateformfield_dependencyrequirement_t *e_ezsigntemplateformfield_dependencyrequirement,
    char *s_ezsigntemplateformfield_positioningpattern,
    int i_ezsigntemplateformfield_positioningoffsetx,
    int i_ezsigntemplateformfield_positioningoffsety,
    field_e_ezsigntemplateformfield_positioningoccurence_t *e_ezsigntemplateformfield_positioningoccurence
    ) {
    ezsigntemplateformfield_request_t *ezsigntemplateformfield_request_local_var = malloc(sizeof(ezsigntemplateformfield_request_t));
    if (!ezsigntemplateformfield_request_local_var) {
        return NULL;
    }
    ezsigntemplateformfield_request_local_var->pki_ezsigntemplateformfield_id = pki_ezsigntemplateformfield_id;
    ezsigntemplateformfield_request_local_var->e_ezsigntemplateformfield_positioning = e_ezsigntemplateformfield_positioning;
    ezsigntemplateformfield_request_local_var->i_ezsigntemplatedocumentpage_pagenumber = i_ezsigntemplatedocumentpage_pagenumber;
    ezsigntemplateformfield_request_local_var->s_ezsigntemplateformfield_label = s_ezsigntemplateformfield_label;
    ezsigntemplateformfield_request_local_var->s_ezsigntemplateformfield_value = s_ezsigntemplateformfield_value;
    ezsigntemplateformfield_request_local_var->i_ezsigntemplateformfield_x = i_ezsigntemplateformfield_x;
    ezsigntemplateformfield_request_local_var->i_ezsigntemplateformfield_y = i_ezsigntemplateformfield_y;
    ezsigntemplateformfield_request_local_var->i_ezsigntemplateformfield_width = i_ezsigntemplateformfield_width;
    ezsigntemplateformfield_request_local_var->i_ezsigntemplateformfield_height = i_ezsigntemplateformfield_height;
    ezsigntemplateformfield_request_local_var->b_ezsigntemplateformfield_autocomplete = b_ezsigntemplateformfield_autocomplete;
    ezsigntemplateformfield_request_local_var->b_ezsigntemplateformfield_selected = b_ezsigntemplateformfield_selected;
    ezsigntemplateformfield_request_local_var->e_ezsigntemplateformfield_dependencyrequirement = e_ezsigntemplateformfield_dependencyrequirement;
    ezsigntemplateformfield_request_local_var->s_ezsigntemplateformfield_positioningpattern = s_ezsigntemplateformfield_positioningpattern;
    ezsigntemplateformfield_request_local_var->i_ezsigntemplateformfield_positioningoffsetx = i_ezsigntemplateformfield_positioningoffsetx;
    ezsigntemplateformfield_request_local_var->i_ezsigntemplateformfield_positioningoffsety = i_ezsigntemplateformfield_positioningoffsety;
    ezsigntemplateformfield_request_local_var->e_ezsigntemplateformfield_positioningoccurence = e_ezsigntemplateformfield_positioningoccurence;

    return ezsigntemplateformfield_request_local_var;
}


void ezsigntemplateformfield_request_free(ezsigntemplateformfield_request_t *ezsigntemplateformfield_request) {
    if(NULL == ezsigntemplateformfield_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateformfield_request->e_ezsigntemplateformfield_positioning) {
        field_e_ezsigntemplateformfield_positioning_free(ezsigntemplateformfield_request->e_ezsigntemplateformfield_positioning);
        ezsigntemplateformfield_request->e_ezsigntemplateformfield_positioning = NULL;
    }
    if (ezsigntemplateformfield_request->s_ezsigntemplateformfield_label) {
        free(ezsigntemplateformfield_request->s_ezsigntemplateformfield_label);
        ezsigntemplateformfield_request->s_ezsigntemplateformfield_label = NULL;
    }
    if (ezsigntemplateformfield_request->s_ezsigntemplateformfield_value) {
        free(ezsigntemplateformfield_request->s_ezsigntemplateformfield_value);
        ezsigntemplateformfield_request->s_ezsigntemplateformfield_value = NULL;
    }
    if (ezsigntemplateformfield_request->e_ezsigntemplateformfield_dependencyrequirement) {
        field_e_ezsigntemplateformfield_dependencyrequirement_free(ezsigntemplateformfield_request->e_ezsigntemplateformfield_dependencyrequirement);
        ezsigntemplateformfield_request->e_ezsigntemplateformfield_dependencyrequirement = NULL;
    }
    if (ezsigntemplateformfield_request->s_ezsigntemplateformfield_positioningpattern) {
        free(ezsigntemplateformfield_request->s_ezsigntemplateformfield_positioningpattern);
        ezsigntemplateformfield_request->s_ezsigntemplateformfield_positioningpattern = NULL;
    }
    if (ezsigntemplateformfield_request->e_ezsigntemplateformfield_positioningoccurence) {
        field_e_ezsigntemplateformfield_positioningoccurence_free(ezsigntemplateformfield_request->e_ezsigntemplateformfield_positioningoccurence);
        ezsigntemplateformfield_request->e_ezsigntemplateformfield_positioningoccurence = NULL;
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


    // ezsigntemplateformfield_request->e_ezsigntemplateformfield_positioning
    if(ezsigntemplateformfield_request->e_ezsigntemplateformfield_positioning != ezmax_api_definition__full_ezsigntemplateformfield_request__NULL) {
    cJSON *e_ezsigntemplateformfield_positioning_local_JSON = field_e_ezsigntemplateformfield_positioning_convertToJSON(ezsigntemplateformfield_request->e_ezsigntemplateformfield_positioning);
    if(e_ezsigntemplateformfield_positioning_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateformfieldPositioning", e_ezsigntemplateformfield_positioning_local_JSON);
    if(item->child == NULL) {
        goto fail;
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
    if(ezsigntemplateformfield_request->i_ezsigntemplateformfield_x) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldX", ezsigntemplateformfield_request->i_ezsigntemplateformfield_x) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateformfield_request->i_ezsigntemplateformfield_y
    if(ezsigntemplateformfield_request->i_ezsigntemplateformfield_y) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldY", ezsigntemplateformfield_request->i_ezsigntemplateformfield_y) == NULL) {
    goto fail; //Numeric
    }
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


    // ezsigntemplateformfield_request->b_ezsigntemplateformfield_autocomplete
    if(ezsigntemplateformfield_request->b_ezsigntemplateformfield_autocomplete) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateformfieldAutocomplete", ezsigntemplateformfield_request->b_ezsigntemplateformfield_autocomplete) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplateformfield_request->b_ezsigntemplateformfield_selected
    if(ezsigntemplateformfield_request->b_ezsigntemplateformfield_selected) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateformfieldSelected", ezsigntemplateformfield_request->b_ezsigntemplateformfield_selected) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplateformfield_request->e_ezsigntemplateformfield_dependencyrequirement
    if(ezsigntemplateformfield_request->e_ezsigntemplateformfield_dependencyrequirement != ezmax_api_definition__full_ezsigntemplateformfield_request__NULL) {
    cJSON *e_ezsigntemplateformfield_dependencyrequirement_local_JSON = field_e_ezsigntemplateformfield_dependencyrequirement_convertToJSON(ezsigntemplateformfield_request->e_ezsigntemplateformfield_dependencyrequirement);
    if(e_ezsigntemplateformfield_dependencyrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateformfieldDependencyrequirement", e_ezsigntemplateformfield_dependencyrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplateformfield_request->s_ezsigntemplateformfield_positioningpattern
    if(ezsigntemplateformfield_request->s_ezsigntemplateformfield_positioningpattern) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateformfieldPositioningpattern", ezsigntemplateformfield_request->s_ezsigntemplateformfield_positioningpattern) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateformfield_request->i_ezsigntemplateformfield_positioningoffsetx
    if(ezsigntemplateformfield_request->i_ezsigntemplateformfield_positioningoffsetx) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldPositioningoffsetx", ezsigntemplateformfield_request->i_ezsigntemplateformfield_positioningoffsetx) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateformfield_request->i_ezsigntemplateformfield_positioningoffsety
    if(ezsigntemplateformfield_request->i_ezsigntemplateformfield_positioningoffsety) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldPositioningoffsety", ezsigntemplateformfield_request->i_ezsigntemplateformfield_positioningoffsety) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateformfield_request->e_ezsigntemplateformfield_positioningoccurence
    if(ezsigntemplateformfield_request->e_ezsigntemplateformfield_positioningoccurence != ezmax_api_definition__full_ezsigntemplateformfield_request__NULL) {
    cJSON *e_ezsigntemplateformfield_positioningoccurence_local_JSON = field_e_ezsigntemplateformfield_positioningoccurence_convertToJSON(ezsigntemplateformfield_request->e_ezsigntemplateformfield_positioningoccurence);
    if(e_ezsigntemplateformfield_positioningoccurence_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateformfieldPositioningoccurence", e_ezsigntemplateformfield_positioningoccurence_local_JSON);
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

ezsigntemplateformfield_request_t *ezsigntemplateformfield_request_parseFromJSON(cJSON *ezsigntemplateformfield_requestJSON){

    ezsigntemplateformfield_request_t *ezsigntemplateformfield_request_local_var = NULL;

    // define the local variable for ezsigntemplateformfield_request->e_ezsigntemplateformfield_positioning
    field_e_ezsigntemplateformfield_positioning_t *e_ezsigntemplateformfield_positioning_local_nonprim = NULL;

    // define the local variable for ezsigntemplateformfield_request->e_ezsigntemplateformfield_dependencyrequirement
    field_e_ezsigntemplateformfield_dependencyrequirement_t *e_ezsigntemplateformfield_dependencyrequirement_local_nonprim = NULL;

    // define the local variable for ezsigntemplateformfield_request->e_ezsigntemplateformfield_positioningoccurence
    field_e_ezsigntemplateformfield_positioningoccurence_t *e_ezsigntemplateformfield_positioningoccurence_local_nonprim = NULL;

    // ezsigntemplateformfield_request->pki_ezsigntemplateformfield_id
    cJSON *pki_ezsigntemplateformfield_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "pkiEzsigntemplateformfieldID");
    if (pki_ezsigntemplateformfield_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplateformfield_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateformfield_request->e_ezsigntemplateformfield_positioning
    cJSON *e_ezsigntemplateformfield_positioning = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "eEzsigntemplateformfieldPositioning");
    if (e_ezsigntemplateformfield_positioning) { 
    e_ezsigntemplateformfield_positioning_local_nonprim = field_e_ezsigntemplateformfield_positioning_parseFromJSON(e_ezsigntemplateformfield_positioning); //custom
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
    if(!cJSON_IsString(s_ezsigntemplateformfield_value) && !cJSON_IsNull(s_ezsigntemplateformfield_value))
    {
    goto end; //String
    }
    }

    // ezsigntemplateformfield_request->i_ezsigntemplateformfield_x
    cJSON *i_ezsigntemplateformfield_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "iEzsigntemplateformfieldX");
    if (i_ezsigntemplateformfield_x) { 
    if(!cJSON_IsNumber(i_ezsigntemplateformfield_x))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateformfield_request->i_ezsigntemplateformfield_y
    cJSON *i_ezsigntemplateformfield_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "iEzsigntemplateformfieldY");
    if (i_ezsigntemplateformfield_y) { 
    if(!cJSON_IsNumber(i_ezsigntemplateformfield_y))
    {
    goto end; //Numeric
    }
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

    // ezsigntemplateformfield_request->b_ezsigntemplateformfield_autocomplete
    cJSON *b_ezsigntemplateformfield_autocomplete = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "bEzsigntemplateformfieldAutocomplete");
    if (b_ezsigntemplateformfield_autocomplete) { 
    if(!cJSON_IsBool(b_ezsigntemplateformfield_autocomplete))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplateformfield_request->b_ezsigntemplateformfield_selected
    cJSON *b_ezsigntemplateformfield_selected = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "bEzsigntemplateformfieldSelected");
    if (b_ezsigntemplateformfield_selected) { 
    if(!cJSON_IsBool(b_ezsigntemplateformfield_selected))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplateformfield_request->e_ezsigntemplateformfield_dependencyrequirement
    cJSON *e_ezsigntemplateformfield_dependencyrequirement = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "eEzsigntemplateformfieldDependencyrequirement");
    if (e_ezsigntemplateformfield_dependencyrequirement) { 
    e_ezsigntemplateformfield_dependencyrequirement_local_nonprim = field_e_ezsigntemplateformfield_dependencyrequirement_parseFromJSON(e_ezsigntemplateformfield_dependencyrequirement); //custom
    }

    // ezsigntemplateformfield_request->s_ezsigntemplateformfield_positioningpattern
    cJSON *s_ezsigntemplateformfield_positioningpattern = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "sEzsigntemplateformfieldPositioningpattern");
    if (s_ezsigntemplateformfield_positioningpattern) { 
    if(!cJSON_IsString(s_ezsigntemplateformfield_positioningpattern) && !cJSON_IsNull(s_ezsigntemplateformfield_positioningpattern))
    {
    goto end; //String
    }
    }

    // ezsigntemplateformfield_request->i_ezsigntemplateformfield_positioningoffsetx
    cJSON *i_ezsigntemplateformfield_positioningoffsetx = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "iEzsigntemplateformfieldPositioningoffsetx");
    if (i_ezsigntemplateformfield_positioningoffsetx) { 
    if(!cJSON_IsNumber(i_ezsigntemplateformfield_positioningoffsetx))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateformfield_request->i_ezsigntemplateformfield_positioningoffsety
    cJSON *i_ezsigntemplateformfield_positioningoffsety = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "iEzsigntemplateformfieldPositioningoffsety");
    if (i_ezsigntemplateformfield_positioningoffsety) { 
    if(!cJSON_IsNumber(i_ezsigntemplateformfield_positioningoffsety))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplateformfield_request->e_ezsigntemplateformfield_positioningoccurence
    cJSON *e_ezsigntemplateformfield_positioningoccurence = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_requestJSON, "eEzsigntemplateformfieldPositioningoccurence");
    if (e_ezsigntemplateformfield_positioningoccurence) { 
    e_ezsigntemplateformfield_positioningoccurence_local_nonprim = field_e_ezsigntemplateformfield_positioningoccurence_parseFromJSON(e_ezsigntemplateformfield_positioningoccurence); //custom
    }


    ezsigntemplateformfield_request_local_var = ezsigntemplateformfield_request_create (
        pki_ezsigntemplateformfield_id ? pki_ezsigntemplateformfield_id->valuedouble : 0,
        e_ezsigntemplateformfield_positioning ? e_ezsigntemplateformfield_positioning_local_nonprim : NULL,
        i_ezsigntemplatedocumentpage_pagenumber->valuedouble,
        strdup(s_ezsigntemplateformfield_label->valuestring),
        s_ezsigntemplateformfield_value && !cJSON_IsNull(s_ezsigntemplateformfield_value) ? strdup(s_ezsigntemplateformfield_value->valuestring) : NULL,
        i_ezsigntemplateformfield_x ? i_ezsigntemplateformfield_x->valuedouble : 0,
        i_ezsigntemplateformfield_y ? i_ezsigntemplateformfield_y->valuedouble : 0,
        i_ezsigntemplateformfield_width->valuedouble,
        i_ezsigntemplateformfield_height->valuedouble,
        b_ezsigntemplateformfield_autocomplete ? b_ezsigntemplateformfield_autocomplete->valueint : 0,
        b_ezsigntemplateformfield_selected ? b_ezsigntemplateformfield_selected->valueint : 0,
        e_ezsigntemplateformfield_dependencyrequirement ? e_ezsigntemplateformfield_dependencyrequirement_local_nonprim : NULL,
        s_ezsigntemplateformfield_positioningpattern && !cJSON_IsNull(s_ezsigntemplateformfield_positioningpattern) ? strdup(s_ezsigntemplateformfield_positioningpattern->valuestring) : NULL,
        i_ezsigntemplateformfield_positioningoffsetx ? i_ezsigntemplateformfield_positioningoffsetx->valuedouble : 0,
        i_ezsigntemplateformfield_positioningoffsety ? i_ezsigntemplateformfield_positioningoffsety->valuedouble : 0,
        e_ezsigntemplateformfield_positioningoccurence ? e_ezsigntemplateformfield_positioningoccurence_local_nonprim : NULL
        );

    return ezsigntemplateformfield_request_local_var;
end:
    if (e_ezsigntemplateformfield_positioning_local_nonprim) {
        field_e_ezsigntemplateformfield_positioning_free(e_ezsigntemplateformfield_positioning_local_nonprim);
        e_ezsigntemplateformfield_positioning_local_nonprim = NULL;
    }
    if (e_ezsigntemplateformfield_dependencyrequirement_local_nonprim) {
        field_e_ezsigntemplateformfield_dependencyrequirement_free(e_ezsigntemplateformfield_dependencyrequirement_local_nonprim);
        e_ezsigntemplateformfield_dependencyrequirement_local_nonprim = NULL;
    }
    if (e_ezsigntemplateformfield_positioningoccurence_local_nonprim) {
        field_e_ezsigntemplateformfield_positioningoccurence_free(e_ezsigntemplateformfield_positioningoccurence_local_nonprim);
        e_ezsigntemplateformfield_positioningoccurence_local_nonprim = NULL;
    }
    return NULL;

}
