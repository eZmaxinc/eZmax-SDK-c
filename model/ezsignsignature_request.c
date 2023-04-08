#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_request.h"


char* e_ezsignsignature_typeezsignsignature_request_ToString(ezmax_api_definition__full_ezsignsignature_request__e e_ezsignsignature_type) {
    char* e_ezsignsignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name", "Attachments" };
	return e_ezsignsignature_typeArray[e_ezsignsignature_type];
}

ezmax_api_definition__full_ezsignsignature_request__e e_ezsignsignature_typeezsignsignature_request_FromString(char* e_ezsignsignature_type){
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
char* e_ezsignsignature_tooltippositionezsignsignature_request_ToString(ezmax_api_definition__full_ezsignsignature_request__e e_ezsignsignature_tooltipposition) {
    char* e_ezsignsignature_tooltippositionArray[] =  { "NULL", "TopLeft", "TopCenter", "TopRight", "MiddleLeft", "MiddleRight", "BottomLeft", "BottomCenter", "BottomRight" };
	return e_ezsignsignature_tooltippositionArray[e_ezsignsignature_tooltipposition];
}

ezmax_api_definition__full_ezsignsignature_request__e e_ezsignsignature_tooltippositionezsignsignature_request_FromString(char* e_ezsignsignature_tooltipposition){
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
char* e_ezsignsignature_fontezsignsignature_request_ToString(ezmax_api_definition__full_ezsignsignature_request__e e_ezsignsignature_font) {
    char* e_ezsignsignature_fontArray[] =  { "NULL", "Normal", "Cursive" };
	return e_ezsignsignature_fontArray[e_ezsignsignature_font];
}

ezmax_api_definition__full_ezsignsignature_request__e e_ezsignsignature_fontezsignsignature_request_FromString(char* e_ezsignsignature_font){
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
char* e_ezsignsignature_attachmentnamesourceezsignsignature_request_ToString(ezmax_api_definition__full_ezsignsignature_request__e e_ezsignsignature_attachmentnamesource) {
    char* e_ezsignsignature_attachmentnamesourceArray[] =  { "NULL", "Description", "Customer", "DescriptionCustomer" };
	return e_ezsignsignature_attachmentnamesourceArray[e_ezsignsignature_attachmentnamesource];
}

ezmax_api_definition__full_ezsignsignature_request__e e_ezsignsignature_attachmentnamesourceezsignsignature_request_FromString(char* e_ezsignsignature_attachmentnamesource){
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

ezsignsignature_request_t *ezsignsignature_request_create(
    int pki_ezsignsignature_id,
    int fki_ezsignfoldersignerassociation_id,
    int i_ezsignpage_pagenumber,
    int i_ezsignsignature_x,
    int i_ezsignsignature_y,
    int i_ezsignsignature_step,
    field_e_ezsignsignature_type_t *e_ezsignsignature_type,
    int fki_ezsigndocument_id,
    char *t_ezsignsignature_tooltip,
    field_e_ezsignsignature_tooltipposition_t *e_ezsignsignature_tooltipposition,
    field_e_ezsignsignature_font_t *e_ezsignsignature_font,
    int fki_ezsignfoldersignerassociation_id_validation,
    int b_ezsignsignature_required,
    field_e_ezsignsignature_attachmentnamesource_t *e_ezsignsignature_attachmentnamesource,
    char *s_ezsignsignature_attachmentdescription,
    int i_ezsignsignature_validationstep
    ) {
    ezsignsignature_request_t *ezsignsignature_request_local_var = malloc(sizeof(ezsignsignature_request_t));
    if (!ezsignsignature_request_local_var) {
        return NULL;
    }
    ezsignsignature_request_local_var->pki_ezsignsignature_id = pki_ezsignsignature_id;
    ezsignsignature_request_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    ezsignsignature_request_local_var->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    ezsignsignature_request_local_var->i_ezsignsignature_x = i_ezsignsignature_x;
    ezsignsignature_request_local_var->i_ezsignsignature_y = i_ezsignsignature_y;
    ezsignsignature_request_local_var->i_ezsignsignature_step = i_ezsignsignature_step;
    ezsignsignature_request_local_var->e_ezsignsignature_type = e_ezsignsignature_type;
    ezsignsignature_request_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    ezsignsignature_request_local_var->t_ezsignsignature_tooltip = t_ezsignsignature_tooltip;
    ezsignsignature_request_local_var->e_ezsignsignature_tooltipposition = e_ezsignsignature_tooltipposition;
    ezsignsignature_request_local_var->e_ezsignsignature_font = e_ezsignsignature_font;
    ezsignsignature_request_local_var->fki_ezsignfoldersignerassociation_id_validation = fki_ezsignfoldersignerassociation_id_validation;
    ezsignsignature_request_local_var->b_ezsignsignature_required = b_ezsignsignature_required;
    ezsignsignature_request_local_var->e_ezsignsignature_attachmentnamesource = e_ezsignsignature_attachmentnamesource;
    ezsignsignature_request_local_var->s_ezsignsignature_attachmentdescription = s_ezsignsignature_attachmentdescription;
    ezsignsignature_request_local_var->i_ezsignsignature_validationstep = i_ezsignsignature_validationstep;

    return ezsignsignature_request_local_var;
}


void ezsignsignature_request_free(ezsignsignature_request_t *ezsignsignature_request) {
    if(NULL == ezsignsignature_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_request->e_ezsignsignature_type) {
        field_e_ezsignsignature_type_free(ezsignsignature_request->e_ezsignsignature_type);
        ezsignsignature_request->e_ezsignsignature_type = NULL;
    }
    if (ezsignsignature_request->t_ezsignsignature_tooltip) {
        free(ezsignsignature_request->t_ezsignsignature_tooltip);
        ezsignsignature_request->t_ezsignsignature_tooltip = NULL;
    }
    if (ezsignsignature_request->e_ezsignsignature_tooltipposition) {
        field_e_ezsignsignature_tooltipposition_free(ezsignsignature_request->e_ezsignsignature_tooltipposition);
        ezsignsignature_request->e_ezsignsignature_tooltipposition = NULL;
    }
    if (ezsignsignature_request->e_ezsignsignature_font) {
        field_e_ezsignsignature_font_free(ezsignsignature_request->e_ezsignsignature_font);
        ezsignsignature_request->e_ezsignsignature_font = NULL;
    }
    if (ezsignsignature_request->e_ezsignsignature_attachmentnamesource) {
        field_e_ezsignsignature_attachmentnamesource_free(ezsignsignature_request->e_ezsignsignature_attachmentnamesource);
        ezsignsignature_request->e_ezsignsignature_attachmentnamesource = NULL;
    }
    if (ezsignsignature_request->s_ezsignsignature_attachmentdescription) {
        free(ezsignsignature_request->s_ezsignsignature_attachmentdescription);
        ezsignsignature_request->s_ezsignsignature_attachmentdescription = NULL;
    }
    free(ezsignsignature_request);
}

cJSON *ezsignsignature_request_convertToJSON(ezsignsignature_request_t *ezsignsignature_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_request->pki_ezsignsignature_id
    if(ezsignsignature_request->pki_ezsignsignature_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignatureID", ezsignsignature_request->pki_ezsignsignature_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_request->fki_ezsignfoldersignerassociation_id
    if (!ezsignsignature_request->fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationID", ezsignsignature_request->fki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request->i_ezsignpage_pagenumber
    if (!ezsignsignature_request->i_ezsignpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpagePagenumber", ezsignsignature_request->i_ezsignpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request->i_ezsignsignature_x
    if (!ezsignsignature_request->i_ezsignsignature_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureX", ezsignsignature_request->i_ezsignsignature_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request->i_ezsignsignature_y
    if (!ezsignsignature_request->i_ezsignsignature_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureY", ezsignsignature_request->i_ezsignsignature_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request->i_ezsignsignature_step
    if (!ezsignsignature_request->i_ezsignsignature_step) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureStep", ezsignsignature_request->i_ezsignsignature_step) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request->e_ezsignsignature_type
    if (ezmax_api_definition__full_ezsignsignature_request__NULL == ezsignsignature_request->e_ezsignsignature_type) {
        goto fail;
    }
    cJSON *e_ezsignsignature_type_local_JSON = field_e_ezsignsignature_type_convertToJSON(ezsignsignature_request->e_ezsignsignature_type);
    if(e_ezsignsignature_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureType", e_ezsignsignature_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignsignature_request->fki_ezsigndocument_id
    if (!ezsignsignature_request->fki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", ezsignsignature_request->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request->t_ezsignsignature_tooltip
    if(ezsignsignature_request->t_ezsignsignature_tooltip) {
    if(cJSON_AddStringToObject(item, "tEzsignsignatureTooltip", ezsignsignature_request->t_ezsignsignature_tooltip) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_request->e_ezsignsignature_tooltipposition
    if(ezsignsignature_request->e_ezsignsignature_tooltipposition != ezmax_api_definition__full_ezsignsignature_request__NULL) {
    cJSON *e_ezsignsignature_tooltipposition_local_JSON = field_e_ezsignsignature_tooltipposition_convertToJSON(ezsignsignature_request->e_ezsignsignature_tooltipposition);
    if(e_ezsignsignature_tooltipposition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureTooltipposition", e_ezsignsignature_tooltipposition_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_request->e_ezsignsignature_font
    if(ezsignsignature_request->e_ezsignsignature_font != ezmax_api_definition__full_ezsignsignature_request__NULL) {
    cJSON *e_ezsignsignature_font_local_JSON = field_e_ezsignsignature_font_convertToJSON(ezsignsignature_request->e_ezsignsignature_font);
    if(e_ezsignsignature_font_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureFont", e_ezsignsignature_font_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_request->fki_ezsignfoldersignerassociation_id_validation
    if(ezsignsignature_request->fki_ezsignfoldersignerassociation_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationIDValidation", ezsignsignature_request->fki_ezsignfoldersignerassociation_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_request->b_ezsignsignature_required
    if(ezsignsignature_request->b_ezsignsignature_required) {
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureRequired", ezsignsignature_request->b_ezsignsignature_required) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignsignature_request->e_ezsignsignature_attachmentnamesource
    if(ezsignsignature_request->e_ezsignsignature_attachmentnamesource != ezmax_api_definition__full_ezsignsignature_request__NULL) {
    cJSON *e_ezsignsignature_attachmentnamesource_local_JSON = field_e_ezsignsignature_attachmentnamesource_convertToJSON(ezsignsignature_request->e_ezsignsignature_attachmentnamesource);
    if(e_ezsignsignature_attachmentnamesource_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureAttachmentnamesource", e_ezsignsignature_attachmentnamesource_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_request->s_ezsignsignature_attachmentdescription
    if(ezsignsignature_request->s_ezsignsignature_attachmentdescription) {
    if(cJSON_AddStringToObject(item, "sEzsignsignatureAttachmentdescription", ezsignsignature_request->s_ezsignsignature_attachmentdescription) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_request->i_ezsignsignature_validationstep
    if(ezsignsignature_request->i_ezsignsignature_validationstep) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureValidationstep", ezsignsignature_request->i_ezsignsignature_validationstep) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsignature_request_t *ezsignsignature_request_parseFromJSON(cJSON *ezsignsignature_requestJSON){

    ezsignsignature_request_t *ezsignsignature_request_local_var = NULL;

    // define the local variable for ezsignsignature_request->e_ezsignsignature_type
    field_e_ezsignsignature_type_t *e_ezsignsignature_type_local_nonprim = NULL;

    // define the local variable for ezsignsignature_request->e_ezsignsignature_tooltipposition
    field_e_ezsignsignature_tooltipposition_t *e_ezsignsignature_tooltipposition_local_nonprim = NULL;

    // define the local variable for ezsignsignature_request->e_ezsignsignature_font
    field_e_ezsignsignature_font_t *e_ezsignsignature_font_local_nonprim = NULL;

    // define the local variable for ezsignsignature_request->e_ezsignsignature_attachmentnamesource
    field_e_ezsignsignature_attachmentnamesource_t *e_ezsignsignature_attachmentnamesource_local_nonprim = NULL;

    // ezsignsignature_request->pki_ezsignsignature_id
    cJSON *pki_ezsignsignature_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_requestJSON, "pkiEzsignsignatureID");
    if (pki_ezsignsignature_id) { 
    if(!cJSON_IsNumber(pki_ezsignsignature_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_request->fki_ezsignfoldersignerassociation_id
    cJSON *fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_requestJSON, "fkiEzsignfoldersignerassociationID");
    if (!fki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }

    // ezsignsignature_request->i_ezsignpage_pagenumber
    cJSON *i_ezsignpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsignsignature_requestJSON, "iEzsignpagePagenumber");
    if (!i_ezsignpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsignsignature_request->i_ezsignsignature_x
    cJSON *i_ezsignsignature_x = cJSON_GetObjectItemCaseSensitive(ezsignsignature_requestJSON, "iEzsignsignatureX");
    if (!i_ezsignsignature_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_x))
    {
    goto end; //Numeric
    }

    // ezsignsignature_request->i_ezsignsignature_y
    cJSON *i_ezsignsignature_y = cJSON_GetObjectItemCaseSensitive(ezsignsignature_requestJSON, "iEzsignsignatureY");
    if (!i_ezsignsignature_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_y))
    {
    goto end; //Numeric
    }

    // ezsignsignature_request->i_ezsignsignature_step
    cJSON *i_ezsignsignature_step = cJSON_GetObjectItemCaseSensitive(ezsignsignature_requestJSON, "iEzsignsignatureStep");
    if (!i_ezsignsignature_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_step))
    {
    goto end; //Numeric
    }

    // ezsignsignature_request->e_ezsignsignature_type
    cJSON *e_ezsignsignature_type = cJSON_GetObjectItemCaseSensitive(ezsignsignature_requestJSON, "eEzsignsignatureType");
    if (!e_ezsignsignature_type) {
        goto end;
    }

    
    e_ezsignsignature_type_local_nonprim = field_e_ezsignsignature_type_parseFromJSON(e_ezsignsignature_type); //custom

    // ezsignsignature_request->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_requestJSON, "fkiEzsigndocumentID");
    if (!fki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigndocument_id))
    {
    goto end; //Numeric
    }

    // ezsignsignature_request->t_ezsignsignature_tooltip
    cJSON *t_ezsignsignature_tooltip = cJSON_GetObjectItemCaseSensitive(ezsignsignature_requestJSON, "tEzsignsignatureTooltip");
    if (t_ezsignsignature_tooltip) { 
    if(!cJSON_IsString(t_ezsignsignature_tooltip) && !cJSON_IsNull(t_ezsignsignature_tooltip))
    {
    goto end; //String
    }
    }

    // ezsignsignature_request->e_ezsignsignature_tooltipposition
    cJSON *e_ezsignsignature_tooltipposition = cJSON_GetObjectItemCaseSensitive(ezsignsignature_requestJSON, "eEzsignsignatureTooltipposition");
    if (e_ezsignsignature_tooltipposition) { 
    e_ezsignsignature_tooltipposition_local_nonprim = field_e_ezsignsignature_tooltipposition_parseFromJSON(e_ezsignsignature_tooltipposition); //custom
    }

    // ezsignsignature_request->e_ezsignsignature_font
    cJSON *e_ezsignsignature_font = cJSON_GetObjectItemCaseSensitive(ezsignsignature_requestJSON, "eEzsignsignatureFont");
    if (e_ezsignsignature_font) { 
    e_ezsignsignature_font_local_nonprim = field_e_ezsignsignature_font_parseFromJSON(e_ezsignsignature_font); //custom
    }

    // ezsignsignature_request->fki_ezsignfoldersignerassociation_id_validation
    cJSON *fki_ezsignfoldersignerassociation_id_validation = cJSON_GetObjectItemCaseSensitive(ezsignsignature_requestJSON, "fkiEzsignfoldersignerassociationIDValidation");
    if (fki_ezsignfoldersignerassociation_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id_validation))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_request->b_ezsignsignature_required
    cJSON *b_ezsignsignature_required = cJSON_GetObjectItemCaseSensitive(ezsignsignature_requestJSON, "bEzsignsignatureRequired");
    if (b_ezsignsignature_required) { 
    if(!cJSON_IsBool(b_ezsignsignature_required))
    {
    goto end; //Bool
    }
    }

    // ezsignsignature_request->e_ezsignsignature_attachmentnamesource
    cJSON *e_ezsignsignature_attachmentnamesource = cJSON_GetObjectItemCaseSensitive(ezsignsignature_requestJSON, "eEzsignsignatureAttachmentnamesource");
    if (e_ezsignsignature_attachmentnamesource) { 
    e_ezsignsignature_attachmentnamesource_local_nonprim = field_e_ezsignsignature_attachmentnamesource_parseFromJSON(e_ezsignsignature_attachmentnamesource); //custom
    }

    // ezsignsignature_request->s_ezsignsignature_attachmentdescription
    cJSON *s_ezsignsignature_attachmentdescription = cJSON_GetObjectItemCaseSensitive(ezsignsignature_requestJSON, "sEzsignsignatureAttachmentdescription");
    if (s_ezsignsignature_attachmentdescription) { 
    if(!cJSON_IsString(s_ezsignsignature_attachmentdescription) && !cJSON_IsNull(s_ezsignsignature_attachmentdescription))
    {
    goto end; //String
    }
    }

    // ezsignsignature_request->i_ezsignsignature_validationstep
    cJSON *i_ezsignsignature_validationstep = cJSON_GetObjectItemCaseSensitive(ezsignsignature_requestJSON, "iEzsignsignatureValidationstep");
    if (i_ezsignsignature_validationstep) { 
    if(!cJSON_IsNumber(i_ezsignsignature_validationstep))
    {
    goto end; //Numeric
    }
    }


    ezsignsignature_request_local_var = ezsignsignature_request_create (
        pki_ezsignsignature_id ? pki_ezsignsignature_id->valuedouble : 0,
        fki_ezsignfoldersignerassociation_id->valuedouble,
        i_ezsignpage_pagenumber->valuedouble,
        i_ezsignsignature_x->valuedouble,
        i_ezsignsignature_y->valuedouble,
        i_ezsignsignature_step->valuedouble,
        e_ezsignsignature_type_local_nonprim,
        fki_ezsigndocument_id->valuedouble,
        t_ezsignsignature_tooltip && !cJSON_IsNull(t_ezsignsignature_tooltip) ? strdup(t_ezsignsignature_tooltip->valuestring) : NULL,
        e_ezsignsignature_tooltipposition ? e_ezsignsignature_tooltipposition_local_nonprim : NULL,
        e_ezsignsignature_font ? e_ezsignsignature_font_local_nonprim : NULL,
        fki_ezsignfoldersignerassociation_id_validation ? fki_ezsignfoldersignerassociation_id_validation->valuedouble : 0,
        b_ezsignsignature_required ? b_ezsignsignature_required->valueint : 0,
        e_ezsignsignature_attachmentnamesource ? e_ezsignsignature_attachmentnamesource_local_nonprim : NULL,
        s_ezsignsignature_attachmentdescription && !cJSON_IsNull(s_ezsignsignature_attachmentdescription) ? strdup(s_ezsignsignature_attachmentdescription->valuestring) : NULL,
        i_ezsignsignature_validationstep ? i_ezsignsignature_validationstep->valuedouble : 0
        );

    return ezsignsignature_request_local_var;
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
    return NULL;

}
