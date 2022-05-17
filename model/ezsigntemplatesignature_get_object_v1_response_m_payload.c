#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignature_get_object_v1_response_m_payload.h"


char* e_ezsigntemplatesignature_typeezsigntemplatesignature_get_object_v1_response_m_payload_ToString(ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__e e_ezsigntemplatesignature_type) {
    char* e_ezsigntemplatesignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name" };
	return e_ezsigntemplatesignature_typeArray[e_ezsigntemplatesignature_type];
}

ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__e e_ezsigntemplatesignature_typeezsigntemplatesignature_get_object_v1_response_m_payload_FromString(char* e_ezsigntemplatesignature_type){
    int stringToReturn = 0;
    char *e_ezsigntemplatesignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name" };
    size_t sizeofArray = sizeof(e_ezsigntemplatesignature_typeArray) / sizeof(e_ezsigntemplatesignature_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatesignature_type, e_ezsigntemplatesignature_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsigntemplatesignature_tooltippositionezsigntemplatesignature_get_object_v1_response_m_payload_ToString(ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__e e_ezsigntemplatesignature_tooltipposition) {
    char* e_ezsigntemplatesignature_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
	return e_ezsigntemplatesignature_tooltippositionArray[e_ezsigntemplatesignature_tooltipposition];
}

ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__e e_ezsigntemplatesignature_tooltippositionezsigntemplatesignature_get_object_v1_response_m_payload_FromString(char* e_ezsigntemplatesignature_tooltipposition){
    int stringToReturn = 0;
    char *e_ezsigntemplatesignature_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
    size_t sizeofArray = sizeof(e_ezsigntemplatesignature_tooltippositionArray) / sizeof(e_ezsigntemplatesignature_tooltippositionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatesignature_tooltipposition, e_ezsigntemplatesignature_tooltippositionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsigntemplatesignature_fontezsigntemplatesignature_get_object_v1_response_m_payload_ToString(ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__e e_ezsigntemplatesignature_font) {
    char* e_ezsigntemplatesignature_fontArray[] =  { "NULL", "Normal", "Cursive" };
	return e_ezsigntemplatesignature_fontArray[e_ezsigntemplatesignature_font];
}

ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__e e_ezsigntemplatesignature_fontezsigntemplatesignature_get_object_v1_response_m_payload_FromString(char* e_ezsigntemplatesignature_font){
    int stringToReturn = 0;
    char *e_ezsigntemplatesignature_fontArray[] =  { "NULL", "Normal", "Cursive" };
    size_t sizeofArray = sizeof(e_ezsigntemplatesignature_fontArray) / sizeof(e_ezsigntemplatesignature_fontArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatesignature_font, e_ezsigntemplatesignature_fontArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigntemplatesignature_get_object_v1_response_m_payload_t *ezsigntemplatesignature_get_object_v1_response_m_payload_create(
    int pki_ezsigntemplatesignature_id,
    int fki_ezsigntemplatedocument_id,
    int fki_ezsigntemplatesigner_id,
    int i_ezsigntemplatedocumentpage_pagenumber,
    int i_ezsigntemplatesignature_x,
    int i_ezsigntemplatesignature_y,
    int i_ezsigntemplatesignature_step,
    field_e_ezsigntemplatesignature_type_t *e_ezsigntemplatesignature_type,
    char *t_ezsigntemplatesignature_tooltip,
    field_e_ezsigntemplatesignature_tooltipposition_t *e_ezsigntemplatesignature_tooltipposition,
    field_e_ezsigntemplatesignature_font_t *e_ezsigntemplatesignature_font,
    int b_ezsigntemplatesignature_customdate,
    list_t *a_obj_ezsigntemplatesignaturecustomdate
    ) {
    ezsigntemplatesignature_get_object_v1_response_m_payload_t *ezsigntemplatesignature_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatesignature_get_object_v1_response_m_payload_t));
    if (!ezsigntemplatesignature_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatesignature_get_object_v1_response_m_payload_local_var->pki_ezsigntemplatesignature_id = pki_ezsigntemplatesignature_id;
    ezsigntemplatesignature_get_object_v1_response_m_payload_local_var->fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    ezsigntemplatesignature_get_object_v1_response_m_payload_local_var->fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;
    ezsigntemplatesignature_get_object_v1_response_m_payload_local_var->i_ezsigntemplatedocumentpage_pagenumber = i_ezsigntemplatedocumentpage_pagenumber;
    ezsigntemplatesignature_get_object_v1_response_m_payload_local_var->i_ezsigntemplatesignature_x = i_ezsigntemplatesignature_x;
    ezsigntemplatesignature_get_object_v1_response_m_payload_local_var->i_ezsigntemplatesignature_y = i_ezsigntemplatesignature_y;
    ezsigntemplatesignature_get_object_v1_response_m_payload_local_var->i_ezsigntemplatesignature_step = i_ezsigntemplatesignature_step;
    ezsigntemplatesignature_get_object_v1_response_m_payload_local_var->e_ezsigntemplatesignature_type = e_ezsigntemplatesignature_type;
    ezsigntemplatesignature_get_object_v1_response_m_payload_local_var->t_ezsigntemplatesignature_tooltip = t_ezsigntemplatesignature_tooltip;
    ezsigntemplatesignature_get_object_v1_response_m_payload_local_var->e_ezsigntemplatesignature_tooltipposition = e_ezsigntemplatesignature_tooltipposition;
    ezsigntemplatesignature_get_object_v1_response_m_payload_local_var->e_ezsigntemplatesignature_font = e_ezsigntemplatesignature_font;
    ezsigntemplatesignature_get_object_v1_response_m_payload_local_var->b_ezsigntemplatesignature_customdate = b_ezsigntemplatesignature_customdate;
    ezsigntemplatesignature_get_object_v1_response_m_payload_local_var->a_obj_ezsigntemplatesignaturecustomdate = a_obj_ezsigntemplatesignaturecustomdate;

    return ezsigntemplatesignature_get_object_v1_response_m_payload_local_var;
}


void ezsigntemplatesignature_get_object_v1_response_m_payload_free(ezsigntemplatesignature_get_object_v1_response_m_payload_t *ezsigntemplatesignature_get_object_v1_response_m_payload) {
    if(NULL == ezsigntemplatesignature_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_type) {
        field_e_ezsigntemplatesignature_type_free(ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_type);
        ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_type = NULL;
    }
    if (ezsigntemplatesignature_get_object_v1_response_m_payload->t_ezsigntemplatesignature_tooltip) {
        free(ezsigntemplatesignature_get_object_v1_response_m_payload->t_ezsigntemplatesignature_tooltip);
        ezsigntemplatesignature_get_object_v1_response_m_payload->t_ezsigntemplatesignature_tooltip = NULL;
    }
    if (ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_tooltipposition) {
        field_e_ezsigntemplatesignature_tooltipposition_free(ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_tooltipposition);
        ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_tooltipposition = NULL;
    }
    if (ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_font) {
        field_e_ezsigntemplatesignature_font_free(ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_font);
        ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_font = NULL;
    }
    if (ezsigntemplatesignature_get_object_v1_response_m_payload->a_obj_ezsigntemplatesignaturecustomdate) {
        list_ForEach(listEntry, ezsigntemplatesignature_get_object_v1_response_m_payload->a_obj_ezsigntemplatesignaturecustomdate) {
            ezsigntemplatesignaturecustomdate_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatesignature_get_object_v1_response_m_payload->a_obj_ezsigntemplatesignaturecustomdate);
        ezsigntemplatesignature_get_object_v1_response_m_payload->a_obj_ezsigntemplatesignaturecustomdate = NULL;
    }
    free(ezsigntemplatesignature_get_object_v1_response_m_payload);
}

cJSON *ezsigntemplatesignature_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatesignature_get_object_v1_response_m_payload_t *ezsigntemplatesignature_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesignature_get_object_v1_response_m_payload->pki_ezsigntemplatesignature_id
    if (!ezsigntemplatesignature_get_object_v1_response_m_payload->pki_ezsigntemplatesignature_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatesignatureID", ezsigntemplatesignature_get_object_v1_response_m_payload->pki_ezsigntemplatesignature_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_get_object_v1_response_m_payload->fki_ezsigntemplatedocument_id
    if (!ezsigntemplatesignature_get_object_v1_response_m_payload->fki_ezsigntemplatedocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatedocumentID", ezsigntemplatesignature_get_object_v1_response_m_payload->fki_ezsigntemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_get_object_v1_response_m_payload->fki_ezsigntemplatesigner_id
    if (!ezsigntemplatesignature_get_object_v1_response_m_payload->fki_ezsigntemplatesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatesignerID", ezsigntemplatesignature_get_object_v1_response_m_payload->fki_ezsigntemplatesigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_get_object_v1_response_m_payload->i_ezsigntemplatedocumentpage_pagenumber
    if (!ezsigntemplatesignature_get_object_v1_response_m_payload->i_ezsigntemplatedocumentpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagePagenumber", ezsigntemplatesignature_get_object_v1_response_m_payload->i_ezsigntemplatedocumentpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_get_object_v1_response_m_payload->i_ezsigntemplatesignature_x
    if (!ezsigntemplatesignature_get_object_v1_response_m_payload->i_ezsigntemplatesignature_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureX", ezsigntemplatesignature_get_object_v1_response_m_payload->i_ezsigntemplatesignature_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_get_object_v1_response_m_payload->i_ezsigntemplatesignature_y
    if (!ezsigntemplatesignature_get_object_v1_response_m_payload->i_ezsigntemplatesignature_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureY", ezsigntemplatesignature_get_object_v1_response_m_payload->i_ezsigntemplatesignature_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_get_object_v1_response_m_payload->i_ezsigntemplatesignature_step
    if (!ezsigntemplatesignature_get_object_v1_response_m_payload->i_ezsigntemplatesignature_step) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureStep", ezsigntemplatesignature_get_object_v1_response_m_payload->i_ezsigntemplatesignature_step) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_type
    if (ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__NULL == ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_type) {
        goto fail;
    }
    cJSON *e_ezsigntemplatesignature_type_local_JSON = field_e_ezsigntemplatesignature_type_convertToJSON(ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_type);
    if(e_ezsigntemplatesignature_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureType", e_ezsigntemplatesignature_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplatesignature_get_object_v1_response_m_payload->t_ezsigntemplatesignature_tooltip
    if(ezsigntemplatesignature_get_object_v1_response_m_payload->t_ezsigntemplatesignature_tooltip) {
    if(cJSON_AddStringToObject(item, "tEzsigntemplatesignatureTooltip", ezsigntemplatesignature_get_object_v1_response_m_payload->t_ezsigntemplatesignature_tooltip) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_tooltipposition
    if(ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_tooltipposition != ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__NULL) {
    cJSON *e_ezsigntemplatesignature_tooltipposition_local_JSON = field_e_ezsigntemplatesignature_tooltipposition_convertToJSON(ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_tooltipposition);
    if(e_ezsigntemplatesignature_tooltipposition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureTooltipposition", e_ezsigntemplatesignature_tooltipposition_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_font
    if(ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_font != ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__NULL) {
    cJSON *e_ezsigntemplatesignature_font_local_JSON = field_e_ezsigntemplatesignature_font_convertToJSON(ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_font);
    if(e_ezsigntemplatesignature_font_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureFont", e_ezsigntemplatesignature_font_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_get_object_v1_response_m_payload->b_ezsigntemplatesignature_customdate
    if(ezsigntemplatesignature_get_object_v1_response_m_payload->b_ezsigntemplatesignature_customdate) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatesignatureCustomdate", ezsigntemplatesignature_get_object_v1_response_m_payload->b_ezsigntemplatesignature_customdate) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplatesignature_get_object_v1_response_m_payload->a_obj_ezsigntemplatesignaturecustomdate
    if(ezsigntemplatesignature_get_object_v1_response_m_payload->a_obj_ezsigntemplatesignaturecustomdate) {
    cJSON *a_obj_ezsigntemplatesignaturecustomdate = cJSON_AddArrayToObject(item, "a_objEzsigntemplatesignaturecustomdate");
    if(a_obj_ezsigntemplatesignaturecustomdate == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatesignaturecustomdateListEntry;
    if (ezsigntemplatesignature_get_object_v1_response_m_payload->a_obj_ezsigntemplatesignaturecustomdate) {
    list_ForEach(a_obj_ezsigntemplatesignaturecustomdateListEntry, ezsigntemplatesignature_get_object_v1_response_m_payload->a_obj_ezsigntemplatesignaturecustomdate) {
    cJSON *itemLocal = ezsigntemplatesignaturecustomdate_response_compound_convertToJSON(a_obj_ezsigntemplatesignaturecustomdateListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatesignaturecustomdate, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatesignature_get_object_v1_response_m_payload_t *ezsigntemplatesignature_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatesignature_get_object_v1_response_m_payloadJSON){

    ezsigntemplatesignature_get_object_v1_response_m_payload_t *ezsigntemplatesignature_get_object_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_type
    field_e_ezsigntemplatesignature_type_t *e_ezsigntemplatesignature_type_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_tooltipposition
    field_e_ezsigntemplatesignature_tooltipposition_t *e_ezsigntemplatesignature_tooltipposition_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_font
    field_e_ezsigntemplatesignature_font_t *e_ezsigntemplatesignature_font_local_nonprim = NULL;

    // define the local list for ezsigntemplatesignature_get_object_v1_response_m_payload->a_obj_ezsigntemplatesignaturecustomdate
    list_t *a_obj_ezsigntemplatesignaturecustomdateList = NULL;

    // ezsigntemplatesignature_get_object_v1_response_m_payload->pki_ezsigntemplatesignature_id
    cJSON *pki_ezsigntemplatesignature_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v1_response_m_payloadJSON, "pkiEzsigntemplatesignatureID");
    if (!pki_ezsigntemplatesignature_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatesignature_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_get_object_v1_response_m_payload->fki_ezsigntemplatedocument_id
    cJSON *fki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v1_response_m_payloadJSON, "fkiEzsigntemplatedocumentID");
    if (!fki_ezsigntemplatedocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatedocument_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_get_object_v1_response_m_payload->fki_ezsigntemplatesigner_id
    cJSON *fki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v1_response_m_payloadJSON, "fkiEzsigntemplatesignerID");
    if (!fki_ezsigntemplatesigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatesigner_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_get_object_v1_response_m_payload->i_ezsigntemplatedocumentpage_pagenumber
    cJSON *i_ezsigntemplatedocumentpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v1_response_m_payloadJSON, "iEzsigntemplatedocumentpagePagenumber");
    if (!i_ezsigntemplatedocumentpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpage_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_get_object_v1_response_m_payload->i_ezsigntemplatesignature_x
    cJSON *i_ezsigntemplatesignature_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v1_response_m_payloadJSON, "iEzsigntemplatesignatureX");
    if (!i_ezsigntemplatesignature_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_x))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_get_object_v1_response_m_payload->i_ezsigntemplatesignature_y
    cJSON *i_ezsigntemplatesignature_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v1_response_m_payloadJSON, "iEzsigntemplatesignatureY");
    if (!i_ezsigntemplatesignature_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_y))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_get_object_v1_response_m_payload->i_ezsigntemplatesignature_step
    cJSON *i_ezsigntemplatesignature_step = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v1_response_m_payloadJSON, "iEzsigntemplatesignatureStep");
    if (!i_ezsigntemplatesignature_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_step))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_type
    cJSON *e_ezsigntemplatesignature_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v1_response_m_payloadJSON, "eEzsigntemplatesignatureType");
    if (!e_ezsigntemplatesignature_type) {
        goto end;
    }

    
    e_ezsigntemplatesignature_type_local_nonprim = field_e_ezsigntemplatesignature_type_parseFromJSON(e_ezsigntemplatesignature_type); //custom

    // ezsigntemplatesignature_get_object_v1_response_m_payload->t_ezsigntemplatesignature_tooltip
    cJSON *t_ezsigntemplatesignature_tooltip = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v1_response_m_payloadJSON, "tEzsigntemplatesignatureTooltip");
    if (t_ezsigntemplatesignature_tooltip) { 
    if(!cJSON_IsString(t_ezsigntemplatesignature_tooltip))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_tooltipposition
    cJSON *e_ezsigntemplatesignature_tooltipposition = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v1_response_m_payloadJSON, "eEzsigntemplatesignatureTooltipposition");
    if (e_ezsigntemplatesignature_tooltipposition) { 
    e_ezsigntemplatesignature_tooltipposition_local_nonprim = field_e_ezsigntemplatesignature_tooltipposition_parseFromJSON(e_ezsigntemplatesignature_tooltipposition); //custom
    }

    // ezsigntemplatesignature_get_object_v1_response_m_payload->e_ezsigntemplatesignature_font
    cJSON *e_ezsigntemplatesignature_font = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v1_response_m_payloadJSON, "eEzsigntemplatesignatureFont");
    if (e_ezsigntemplatesignature_font) { 
    e_ezsigntemplatesignature_font_local_nonprim = field_e_ezsigntemplatesignature_font_parseFromJSON(e_ezsigntemplatesignature_font); //custom
    }

    // ezsigntemplatesignature_get_object_v1_response_m_payload->b_ezsigntemplatesignature_customdate
    cJSON *b_ezsigntemplatesignature_customdate = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v1_response_m_payloadJSON, "bEzsigntemplatesignatureCustomdate");
    if (b_ezsigntemplatesignature_customdate) { 
    if(!cJSON_IsBool(b_ezsigntemplatesignature_customdate))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplatesignature_get_object_v1_response_m_payload->a_obj_ezsigntemplatesignaturecustomdate
    cJSON *a_obj_ezsigntemplatesignaturecustomdate = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v1_response_m_payloadJSON, "a_objEzsigntemplatesignaturecustomdate");
    if (a_obj_ezsigntemplatesignaturecustomdate) { 
    cJSON *a_obj_ezsigntemplatesignaturecustomdate_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatesignaturecustomdate)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatesignaturecustomdateList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatesignaturecustomdate_local_nonprimitive,a_obj_ezsigntemplatesignaturecustomdate )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatesignaturecustomdate_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatesignaturecustomdate_response_compound_t *a_obj_ezsigntemplatesignaturecustomdateItem = ezsigntemplatesignaturecustomdate_response_compound_parseFromJSON(a_obj_ezsigntemplatesignaturecustomdate_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatesignaturecustomdateList, a_obj_ezsigntemplatesignaturecustomdateItem);
    }
    }


    ezsigntemplatesignature_get_object_v1_response_m_payload_local_var = ezsigntemplatesignature_get_object_v1_response_m_payload_create (
        pki_ezsigntemplatesignature_id->valuedouble,
        fki_ezsigntemplatedocument_id->valuedouble,
        fki_ezsigntemplatesigner_id->valuedouble,
        i_ezsigntemplatedocumentpage_pagenumber->valuedouble,
        i_ezsigntemplatesignature_x->valuedouble,
        i_ezsigntemplatesignature_y->valuedouble,
        i_ezsigntemplatesignature_step->valuedouble,
        e_ezsigntemplatesignature_type_local_nonprim,
        t_ezsigntemplatesignature_tooltip ? strdup(t_ezsigntemplatesignature_tooltip->valuestring) : NULL,
        e_ezsigntemplatesignature_tooltipposition ? e_ezsigntemplatesignature_tooltipposition_local_nonprim : NULL,
        e_ezsigntemplatesignature_font ? e_ezsigntemplatesignature_font_local_nonprim : NULL,
        b_ezsigntemplatesignature_customdate ? b_ezsigntemplatesignature_customdate->valueint : 0,
        a_obj_ezsigntemplatesignaturecustomdate ? a_obj_ezsigntemplatesignaturecustomdateList : NULL
        );

    return ezsigntemplatesignature_get_object_v1_response_m_payload_local_var;
end:
    if (e_ezsigntemplatesignature_type_local_nonprim) {
        field_e_ezsigntemplatesignature_type_free(e_ezsigntemplatesignature_type_local_nonprim);
        e_ezsigntemplatesignature_type_local_nonprim = NULL;
    }
    if (e_ezsigntemplatesignature_tooltipposition_local_nonprim) {
        field_e_ezsigntemplatesignature_tooltipposition_free(e_ezsigntemplatesignature_tooltipposition_local_nonprim);
        e_ezsigntemplatesignature_tooltipposition_local_nonprim = NULL;
    }
    if (e_ezsigntemplatesignature_font_local_nonprim) {
        field_e_ezsigntemplatesignature_font_free(e_ezsigntemplatesignature_font_local_nonprim);
        e_ezsigntemplatesignature_font_local_nonprim = NULL;
    }
    if (a_obj_ezsigntemplatesignaturecustomdateList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatesignaturecustomdateList) {
            ezsigntemplatesignaturecustomdate_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatesignaturecustomdateList);
        a_obj_ezsigntemplatesignaturecustomdateList = NULL;
    }
    return NULL;

}
