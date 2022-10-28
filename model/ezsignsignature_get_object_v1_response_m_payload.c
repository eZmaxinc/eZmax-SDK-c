#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_get_object_v1_response_m_payload.h"


char* e_ezsignsignature_typeezsignsignature_get_object_v1_response_m_payload_ToString(ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__e e_ezsignsignature_type) {
    char* e_ezsignsignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name", "Attachments" };
	return e_ezsignsignature_typeArray[e_ezsignsignature_type];
}

ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__e e_ezsignsignature_typeezsignsignature_get_object_v1_response_m_payload_FromString(char* e_ezsignsignature_type){
    int stringToReturn = 0;
    char *e_ezsignsignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name", "Attachments" };
    size_t sizeofArray = sizeof(e_ezsignsignature_typeArray) / sizeof(e_ezsignsignature_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignsignature_type, e_ezsignsignature_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsignsignature_tooltippositionezsignsignature_get_object_v1_response_m_payload_ToString(ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__e e_ezsignsignature_tooltipposition) {
    char* e_ezsignsignature_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
	return e_ezsignsignature_tooltippositionArray[e_ezsignsignature_tooltipposition];
}

ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__e e_ezsignsignature_tooltippositionezsignsignature_get_object_v1_response_m_payload_FromString(char* e_ezsignsignature_tooltipposition){
    int stringToReturn = 0;
    char *e_ezsignsignature_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
    size_t sizeofArray = sizeof(e_ezsignsignature_tooltippositionArray) / sizeof(e_ezsignsignature_tooltippositionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignsignature_tooltipposition, e_ezsignsignature_tooltippositionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsignsignature_fontezsignsignature_get_object_v1_response_m_payload_ToString(ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__e e_ezsignsignature_font) {
    char* e_ezsignsignature_fontArray[] =  { "NULL", "Normal", "Cursive" };
	return e_ezsignsignature_fontArray[e_ezsignsignature_font];
}

ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__e e_ezsignsignature_fontezsignsignature_get_object_v1_response_m_payload_FromString(char* e_ezsignsignature_font){
    int stringToReturn = 0;
    char *e_ezsignsignature_fontArray[] =  { "NULL", "Normal", "Cursive" };
    size_t sizeofArray = sizeof(e_ezsignsignature_fontArray) / sizeof(e_ezsignsignature_fontArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignsignature_font, e_ezsignsignature_fontArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsignsignature_attachmentnamesourceezsignsignature_get_object_v1_response_m_payload_ToString(ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__e e_ezsignsignature_attachmentnamesource) {
    char* e_ezsignsignature_attachmentnamesourceArray[] =  { "NULL", "Description", "Customer", "DescriptionCustomer" };
	return e_ezsignsignature_attachmentnamesourceArray[e_ezsignsignature_attachmentnamesource];
}

ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__e e_ezsignsignature_attachmentnamesourceezsignsignature_get_object_v1_response_m_payload_FromString(char* e_ezsignsignature_attachmentnamesource){
    int stringToReturn = 0;
    char *e_ezsignsignature_attachmentnamesourceArray[] =  { "NULL", "Description", "Customer", "DescriptionCustomer" };
    size_t sizeofArray = sizeof(e_ezsignsignature_attachmentnamesourceArray) / sizeof(e_ezsignsignature_attachmentnamesourceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignsignature_attachmentnamesource, e_ezsignsignature_attachmentnamesourceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignsignature_get_object_v1_response_m_payload_t *ezsignsignature_get_object_v1_response_m_payload_create(
    int pki_ezsignsignature_id,
    int fki_ezsigndocument_id,
    int fki_ezsignfoldersignerassociation_id,
    int i_ezsignpage_pagenumber,
    int i_ezsignsignature_x,
    int i_ezsignsignature_y,
    int i_ezsignsignature_step,
    field_e_ezsignsignature_type_t *e_ezsignsignature_type,
    char *t_ezsignsignature_tooltip,
    field_e_ezsignsignature_tooltipposition_t *e_ezsignsignature_tooltipposition,
    field_e_ezsignsignature_font_t *e_ezsignsignature_font,
    int i_ezsignsignature_validationstep,
    char *s_ezsignsignature_attachmentdescription,
    field_e_ezsignsignature_attachmentnamesource_t *e_ezsignsignature_attachmentnamesource,
    int b_ezsignsignature_required,
    int fki_ezsignfoldersignerassociation_id_validation,
    int b_ezsignsignature_customdate,
    list_t *a_obj_ezsignsignaturecustomdate
    ) {
    ezsignsignature_get_object_v1_response_m_payload_t *ezsignsignature_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignsignature_get_object_v1_response_m_payload_t));
    if (!ezsignsignature_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignsignature_get_object_v1_response_m_payload_local_var->pki_ezsignsignature_id = pki_ezsignsignature_id;
    ezsignsignature_get_object_v1_response_m_payload_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    ezsignsignature_get_object_v1_response_m_payload_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    ezsignsignature_get_object_v1_response_m_payload_local_var->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    ezsignsignature_get_object_v1_response_m_payload_local_var->i_ezsignsignature_x = i_ezsignsignature_x;
    ezsignsignature_get_object_v1_response_m_payload_local_var->i_ezsignsignature_y = i_ezsignsignature_y;
    ezsignsignature_get_object_v1_response_m_payload_local_var->i_ezsignsignature_step = i_ezsignsignature_step;
    ezsignsignature_get_object_v1_response_m_payload_local_var->e_ezsignsignature_type = e_ezsignsignature_type;
    ezsignsignature_get_object_v1_response_m_payload_local_var->t_ezsignsignature_tooltip = t_ezsignsignature_tooltip;
    ezsignsignature_get_object_v1_response_m_payload_local_var->e_ezsignsignature_tooltipposition = e_ezsignsignature_tooltipposition;
    ezsignsignature_get_object_v1_response_m_payload_local_var->e_ezsignsignature_font = e_ezsignsignature_font;
    ezsignsignature_get_object_v1_response_m_payload_local_var->i_ezsignsignature_validationstep = i_ezsignsignature_validationstep;
    ezsignsignature_get_object_v1_response_m_payload_local_var->s_ezsignsignature_attachmentdescription = s_ezsignsignature_attachmentdescription;
    ezsignsignature_get_object_v1_response_m_payload_local_var->e_ezsignsignature_attachmentnamesource = e_ezsignsignature_attachmentnamesource;
    ezsignsignature_get_object_v1_response_m_payload_local_var->b_ezsignsignature_required = b_ezsignsignature_required;
    ezsignsignature_get_object_v1_response_m_payload_local_var->fki_ezsignfoldersignerassociation_id_validation = fki_ezsignfoldersignerassociation_id_validation;
    ezsignsignature_get_object_v1_response_m_payload_local_var->b_ezsignsignature_customdate = b_ezsignsignature_customdate;
    ezsignsignature_get_object_v1_response_m_payload_local_var->a_obj_ezsignsignaturecustomdate = a_obj_ezsignsignaturecustomdate;

    return ezsignsignature_get_object_v1_response_m_payload_local_var;
}


void ezsignsignature_get_object_v1_response_m_payload_free(ezsignsignature_get_object_v1_response_m_payload_t *ezsignsignature_get_object_v1_response_m_payload) {
    if(NULL == ezsignsignature_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_type) {
        field_e_ezsignsignature_type_free(ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_type);
        ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_type = NULL;
    }
    if (ezsignsignature_get_object_v1_response_m_payload->t_ezsignsignature_tooltip) {
        free(ezsignsignature_get_object_v1_response_m_payload->t_ezsignsignature_tooltip);
        ezsignsignature_get_object_v1_response_m_payload->t_ezsignsignature_tooltip = NULL;
    }
    if (ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_tooltipposition) {
        field_e_ezsignsignature_tooltipposition_free(ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_tooltipposition);
        ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_tooltipposition = NULL;
    }
    if (ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_font) {
        field_e_ezsignsignature_font_free(ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_font);
        ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_font = NULL;
    }
    if (ezsignsignature_get_object_v1_response_m_payload->s_ezsignsignature_attachmentdescription) {
        free(ezsignsignature_get_object_v1_response_m_payload->s_ezsignsignature_attachmentdescription);
        ezsignsignature_get_object_v1_response_m_payload->s_ezsignsignature_attachmentdescription = NULL;
    }
    if (ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_attachmentnamesource) {
        field_e_ezsignsignature_attachmentnamesource_free(ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_attachmentnamesource);
        ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_attachmentnamesource = NULL;
    }
    if (ezsignsignature_get_object_v1_response_m_payload->a_obj_ezsignsignaturecustomdate) {
        list_ForEach(listEntry, ezsignsignature_get_object_v1_response_m_payload->a_obj_ezsignsignaturecustomdate) {
            ezsignsignaturecustomdate_response_compound_free(listEntry->data);
        }
        list_freeList(ezsignsignature_get_object_v1_response_m_payload->a_obj_ezsignsignaturecustomdate);
        ezsignsignature_get_object_v1_response_m_payload->a_obj_ezsignsignaturecustomdate = NULL;
    }
    free(ezsignsignature_get_object_v1_response_m_payload);
}

cJSON *ezsignsignature_get_object_v1_response_m_payload_convertToJSON(ezsignsignature_get_object_v1_response_m_payload_t *ezsignsignature_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_get_object_v1_response_m_payload->pki_ezsignsignature_id
    if (!ezsignsignature_get_object_v1_response_m_payload->pki_ezsignsignature_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignatureID", ezsignsignature_get_object_v1_response_m_payload->pki_ezsignsignature_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_get_object_v1_response_m_payload->fki_ezsigndocument_id
    if (!ezsignsignature_get_object_v1_response_m_payload->fki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", ezsignsignature_get_object_v1_response_m_payload->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_get_object_v1_response_m_payload->fki_ezsignfoldersignerassociation_id
    if (!ezsignsignature_get_object_v1_response_m_payload->fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationID", ezsignsignature_get_object_v1_response_m_payload->fki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_get_object_v1_response_m_payload->i_ezsignpage_pagenumber
    if (!ezsignsignature_get_object_v1_response_m_payload->i_ezsignpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpagePagenumber", ezsignsignature_get_object_v1_response_m_payload->i_ezsignpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_get_object_v1_response_m_payload->i_ezsignsignature_x
    if (!ezsignsignature_get_object_v1_response_m_payload->i_ezsignsignature_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureX", ezsignsignature_get_object_v1_response_m_payload->i_ezsignsignature_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_get_object_v1_response_m_payload->i_ezsignsignature_y
    if (!ezsignsignature_get_object_v1_response_m_payload->i_ezsignsignature_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureY", ezsignsignature_get_object_v1_response_m_payload->i_ezsignsignature_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_get_object_v1_response_m_payload->i_ezsignsignature_step
    if (!ezsignsignature_get_object_v1_response_m_payload->i_ezsignsignature_step) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureStep", ezsignsignature_get_object_v1_response_m_payload->i_ezsignsignature_step) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_type
    if (ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__NULL == ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_type) {
        goto fail;
    }
    cJSON *e_ezsignsignature_type_local_JSON = field_e_ezsignsignature_type_convertToJSON(ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_type);
    if(e_ezsignsignature_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureType", e_ezsignsignature_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignsignature_get_object_v1_response_m_payload->t_ezsignsignature_tooltip
    if(ezsignsignature_get_object_v1_response_m_payload->t_ezsignsignature_tooltip) {
    if(cJSON_AddStringToObject(item, "tEzsignsignatureTooltip", ezsignsignature_get_object_v1_response_m_payload->t_ezsignsignature_tooltip) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_tooltipposition
    if(ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_tooltipposition != ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__NULL) {
    cJSON *e_ezsignsignature_tooltipposition_local_JSON = field_e_ezsignsignature_tooltipposition_convertToJSON(ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_tooltipposition);
    if(e_ezsignsignature_tooltipposition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureTooltipposition", e_ezsignsignature_tooltipposition_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_font
    if(ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_font != ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__NULL) {
    cJSON *e_ezsignsignature_font_local_JSON = field_e_ezsignsignature_font_convertToJSON(ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_font);
    if(e_ezsignsignature_font_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureFont", e_ezsignsignature_font_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_get_object_v1_response_m_payload->i_ezsignsignature_validationstep
    if(ezsignsignature_get_object_v1_response_m_payload->i_ezsignsignature_validationstep) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureValidationstep", ezsignsignature_get_object_v1_response_m_payload->i_ezsignsignature_validationstep) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_get_object_v1_response_m_payload->s_ezsignsignature_attachmentdescription
    if(ezsignsignature_get_object_v1_response_m_payload->s_ezsignsignature_attachmentdescription) {
    if(cJSON_AddStringToObject(item, "sEzsignsignatureAttachmentdescription", ezsignsignature_get_object_v1_response_m_payload->s_ezsignsignature_attachmentdescription) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_attachmentnamesource
    if(ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_attachmentnamesource != ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__NULL) {
    cJSON *e_ezsignsignature_attachmentnamesource_local_JSON = field_e_ezsignsignature_attachmentnamesource_convertToJSON(ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_attachmentnamesource);
    if(e_ezsignsignature_attachmentnamesource_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureAttachmentnamesource", e_ezsignsignature_attachmentnamesource_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_get_object_v1_response_m_payload->b_ezsignsignature_required
    if(ezsignsignature_get_object_v1_response_m_payload->b_ezsignsignature_required) {
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureRequired", ezsignsignature_get_object_v1_response_m_payload->b_ezsignsignature_required) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignsignature_get_object_v1_response_m_payload->fki_ezsignfoldersignerassociation_id_validation
    if(ezsignsignature_get_object_v1_response_m_payload->fki_ezsignfoldersignerassociation_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationIDValidation", ezsignsignature_get_object_v1_response_m_payload->fki_ezsignfoldersignerassociation_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_get_object_v1_response_m_payload->b_ezsignsignature_customdate
    if(ezsignsignature_get_object_v1_response_m_payload->b_ezsignsignature_customdate) {
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureCustomdate", ezsignsignature_get_object_v1_response_m_payload->b_ezsignsignature_customdate) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignsignature_get_object_v1_response_m_payload->a_obj_ezsignsignaturecustomdate
    if(ezsignsignature_get_object_v1_response_m_payload->a_obj_ezsignsignaturecustomdate) {
    cJSON *a_obj_ezsignsignaturecustomdate = cJSON_AddArrayToObject(item, "a_objEzsignsignaturecustomdate");
    if(a_obj_ezsignsignaturecustomdate == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignaturecustomdateListEntry;
    if (ezsignsignature_get_object_v1_response_m_payload->a_obj_ezsignsignaturecustomdate) {
    list_ForEach(a_obj_ezsignsignaturecustomdateListEntry, ezsignsignature_get_object_v1_response_m_payload->a_obj_ezsignsignaturecustomdate) {
    cJSON *itemLocal = ezsignsignaturecustomdate_response_compound_convertToJSON(a_obj_ezsignsignaturecustomdateListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsignaturecustomdate, itemLocal);
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

ezsignsignature_get_object_v1_response_m_payload_t *ezsignsignature_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignsignature_get_object_v1_response_m_payloadJSON){

    ezsignsignature_get_object_v1_response_m_payload_t *ezsignsignature_get_object_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_type
    field_e_ezsignsignature_type_t *e_ezsignsignature_type_local_nonprim = NULL;

    // define the local variable for ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_tooltipposition
    field_e_ezsignsignature_tooltipposition_t *e_ezsignsignature_tooltipposition_local_nonprim = NULL;

    // define the local variable for ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_font
    field_e_ezsignsignature_font_t *e_ezsignsignature_font_local_nonprim = NULL;

    // define the local variable for ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_attachmentnamesource
    field_e_ezsignsignature_attachmentnamesource_t *e_ezsignsignature_attachmentnamesource_local_nonprim = NULL;

    // define the local list for ezsignsignature_get_object_v1_response_m_payload->a_obj_ezsignsignaturecustomdate
    list_t *a_obj_ezsignsignaturecustomdateList = NULL;

    // ezsignsignature_get_object_v1_response_m_payload->pki_ezsignsignature_id
    cJSON *pki_ezsignsignature_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v1_response_m_payloadJSON, "pkiEzsignsignatureID");
    if (!pki_ezsignsignature_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsignature_id))
    {
    goto end; //Numeric
    }

    // ezsignsignature_get_object_v1_response_m_payload->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v1_response_m_payloadJSON, "fkiEzsigndocumentID");
    if (!fki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigndocument_id))
    {
    goto end; //Numeric
    }

    // ezsignsignature_get_object_v1_response_m_payload->fki_ezsignfoldersignerassociation_id
    cJSON *fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v1_response_m_payloadJSON, "fkiEzsignfoldersignerassociationID");
    if (!fki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }

    // ezsignsignature_get_object_v1_response_m_payload->i_ezsignpage_pagenumber
    cJSON *i_ezsignpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v1_response_m_payloadJSON, "iEzsignpagePagenumber");
    if (!i_ezsignpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsignsignature_get_object_v1_response_m_payload->i_ezsignsignature_x
    cJSON *i_ezsignsignature_x = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v1_response_m_payloadJSON, "iEzsignsignatureX");
    if (!i_ezsignsignature_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_x))
    {
    goto end; //Numeric
    }

    // ezsignsignature_get_object_v1_response_m_payload->i_ezsignsignature_y
    cJSON *i_ezsignsignature_y = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v1_response_m_payloadJSON, "iEzsignsignatureY");
    if (!i_ezsignsignature_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_y))
    {
    goto end; //Numeric
    }

    // ezsignsignature_get_object_v1_response_m_payload->i_ezsignsignature_step
    cJSON *i_ezsignsignature_step = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v1_response_m_payloadJSON, "iEzsignsignatureStep");
    if (!i_ezsignsignature_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_step))
    {
    goto end; //Numeric
    }

    // ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_type
    cJSON *e_ezsignsignature_type = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v1_response_m_payloadJSON, "eEzsignsignatureType");
    if (!e_ezsignsignature_type) {
        goto end;
    }

    
    e_ezsignsignature_type_local_nonprim = field_e_ezsignsignature_type_parseFromJSON(e_ezsignsignature_type); //custom

    // ezsignsignature_get_object_v1_response_m_payload->t_ezsignsignature_tooltip
    cJSON *t_ezsignsignature_tooltip = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v1_response_m_payloadJSON, "tEzsignsignatureTooltip");
    if (t_ezsignsignature_tooltip) { 
    if(!cJSON_IsString(t_ezsignsignature_tooltip))
    {
    goto end; //String
    }
    }

    // ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_tooltipposition
    cJSON *e_ezsignsignature_tooltipposition = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v1_response_m_payloadJSON, "eEzsignsignatureTooltipposition");
    if (e_ezsignsignature_tooltipposition) { 
    e_ezsignsignature_tooltipposition_local_nonprim = field_e_ezsignsignature_tooltipposition_parseFromJSON(e_ezsignsignature_tooltipposition); //custom
    }

    // ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_font
    cJSON *e_ezsignsignature_font = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v1_response_m_payloadJSON, "eEzsignsignatureFont");
    if (e_ezsignsignature_font) { 
    e_ezsignsignature_font_local_nonprim = field_e_ezsignsignature_font_parseFromJSON(e_ezsignsignature_font); //custom
    }

    // ezsignsignature_get_object_v1_response_m_payload->i_ezsignsignature_validationstep
    cJSON *i_ezsignsignature_validationstep = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v1_response_m_payloadJSON, "iEzsignsignatureValidationstep");
    if (i_ezsignsignature_validationstep) { 
    if(!cJSON_IsNumber(i_ezsignsignature_validationstep))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_get_object_v1_response_m_payload->s_ezsignsignature_attachmentdescription
    cJSON *s_ezsignsignature_attachmentdescription = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v1_response_m_payloadJSON, "sEzsignsignatureAttachmentdescription");
    if (s_ezsignsignature_attachmentdescription) { 
    if(!cJSON_IsString(s_ezsignsignature_attachmentdescription))
    {
    goto end; //String
    }
    }

    // ezsignsignature_get_object_v1_response_m_payload->e_ezsignsignature_attachmentnamesource
    cJSON *e_ezsignsignature_attachmentnamesource = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v1_response_m_payloadJSON, "eEzsignsignatureAttachmentnamesource");
    if (e_ezsignsignature_attachmentnamesource) { 
    e_ezsignsignature_attachmentnamesource_local_nonprim = field_e_ezsignsignature_attachmentnamesource_parseFromJSON(e_ezsignsignature_attachmentnamesource); //custom
    }

    // ezsignsignature_get_object_v1_response_m_payload->b_ezsignsignature_required
    cJSON *b_ezsignsignature_required = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v1_response_m_payloadJSON, "bEzsignsignatureRequired");
    if (b_ezsignsignature_required) { 
    if(!cJSON_IsBool(b_ezsignsignature_required))
    {
    goto end; //Bool
    }
    }

    // ezsignsignature_get_object_v1_response_m_payload->fki_ezsignfoldersignerassociation_id_validation
    cJSON *fki_ezsignfoldersignerassociation_id_validation = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v1_response_m_payloadJSON, "fkiEzsignfoldersignerassociationIDValidation");
    if (fki_ezsignfoldersignerassociation_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_get_object_v1_response_m_payload->b_ezsignsignature_customdate
    cJSON *b_ezsignsignature_customdate = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v1_response_m_payloadJSON, "bEzsignsignatureCustomdate");
    if (b_ezsignsignature_customdate) { 
    if(!cJSON_IsBool(b_ezsignsignature_customdate))
    {
    goto end; //Bool
    }
    }

    // ezsignsignature_get_object_v1_response_m_payload->a_obj_ezsignsignaturecustomdate
    cJSON *a_obj_ezsignsignaturecustomdate = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v1_response_m_payloadJSON, "a_objEzsignsignaturecustomdate");
    if (a_obj_ezsignsignaturecustomdate) { 
    cJSON *a_obj_ezsignsignaturecustomdate_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignsignaturecustomdate)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignsignaturecustomdateList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignsignaturecustomdate_local_nonprimitive,a_obj_ezsignsignaturecustomdate )
    {
        if(!cJSON_IsObject(a_obj_ezsignsignaturecustomdate_local_nonprimitive)){
            goto end;
        }
        ezsignsignaturecustomdate_response_compound_t *a_obj_ezsignsignaturecustomdateItem = ezsignsignaturecustomdate_response_compound_parseFromJSON(a_obj_ezsignsignaturecustomdate_local_nonprimitive);

        list_addElement(a_obj_ezsignsignaturecustomdateList, a_obj_ezsignsignaturecustomdateItem);
    }
    }


    ezsignsignature_get_object_v1_response_m_payload_local_var = ezsignsignature_get_object_v1_response_m_payload_create (
        pki_ezsignsignature_id->valuedouble,
        fki_ezsigndocument_id->valuedouble,
        fki_ezsignfoldersignerassociation_id->valuedouble,
        i_ezsignpage_pagenumber->valuedouble,
        i_ezsignsignature_x->valuedouble,
        i_ezsignsignature_y->valuedouble,
        i_ezsignsignature_step->valuedouble,
        e_ezsignsignature_type_local_nonprim,
        t_ezsignsignature_tooltip ? strdup(t_ezsignsignature_tooltip->valuestring) : NULL,
        e_ezsignsignature_tooltipposition ? e_ezsignsignature_tooltipposition_local_nonprim : NULL,
        e_ezsignsignature_font ? e_ezsignsignature_font_local_nonprim : NULL,
        i_ezsignsignature_validationstep ? i_ezsignsignature_validationstep->valuedouble : 0,
        s_ezsignsignature_attachmentdescription ? strdup(s_ezsignsignature_attachmentdescription->valuestring) : NULL,
        e_ezsignsignature_attachmentnamesource ? e_ezsignsignature_attachmentnamesource_local_nonprim : NULL,
        b_ezsignsignature_required ? b_ezsignsignature_required->valueint : 0,
        fki_ezsignfoldersignerassociation_id_validation ? fki_ezsignfoldersignerassociation_id_validation->valuedouble : 0,
        b_ezsignsignature_customdate ? b_ezsignsignature_customdate->valueint : 0,
        a_obj_ezsignsignaturecustomdate ? a_obj_ezsignsignaturecustomdateList : NULL
        );

    return ezsignsignature_get_object_v1_response_m_payload_local_var;
end:
    if (e_ezsignsignature_type_local_nonprim) {
        field_e_ezsignsignature_type_free(e_ezsignsignature_type_local_nonprim);
        e_ezsignsignature_type_local_nonprim = NULL;
    }
    if (e_ezsignsignature_tooltipposition_local_nonprim) {
        field_e_ezsignsignature_tooltipposition_free(e_ezsignsignature_tooltipposition_local_nonprim);
        e_ezsignsignature_tooltipposition_local_nonprim = NULL;
    }
    if (e_ezsignsignature_font_local_nonprim) {
        field_e_ezsignsignature_font_free(e_ezsignsignature_font_local_nonprim);
        e_ezsignsignature_font_local_nonprim = NULL;
    }
    if (e_ezsignsignature_attachmentnamesource_local_nonprim) {
        field_e_ezsignsignature_attachmentnamesource_free(e_ezsignsignature_attachmentnamesource_local_nonprim);
        e_ezsignsignature_attachmentnamesource_local_nonprim = NULL;
    }
    if (a_obj_ezsignsignaturecustomdateList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignsignaturecustomdateList) {
            ezsignsignaturecustomdate_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignsignaturecustomdateList);
        a_obj_ezsignsignaturecustomdateList = NULL;
    }
    return NULL;

}
