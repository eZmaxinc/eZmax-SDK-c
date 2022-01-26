#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_request_compound.h"


char* e_ezsignsignature_typeezsignsignature_request_compound_ToString(ezmax_api_definition_ezsignsignature_request_compound__e e_ezsignsignature_type) {
    char* e_ezsignsignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name" };
	return e_ezsignsignature_typeArray[e_ezsignsignature_type];
}

ezmax_api_definition_ezsignsignature_request_compound__e e_ezsignsignature_typeezsignsignature_request_compound_FromString(char* e_ezsignsignature_type){
    int stringToReturn = 0;
    char *e_ezsignsignature_typeArray[] =  { "NULL", "Acknowledgement", "City", "Handwritten", "Initials", "Name" };
    size_t sizeofArray = sizeof(e_ezsignsignature_typeArray) / sizeof(e_ezsignsignature_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignsignature_type, e_ezsignsignature_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignsignature_request_compound_t *ezsignsignature_request_compound_create(
    int b_ezsignsignature_customdate,
    list_t *a_obj_ezsignsignaturecustomdate,
    int fki_ezsignfoldersignerassociation_id,
    int i_ezsignpage_pagenumber,
    int i_ezsignsignature_x,
    int i_ezsignsignature_y,
    int i_ezsignsignature_step,
    field_e_ezsignsignature_type_t *e_ezsignsignature_type,
    int fki_ezsigndocument_id
    ) {
    ezsignsignature_request_compound_t *ezsignsignature_request_compound_local_var = malloc(sizeof(ezsignsignature_request_compound_t));
    if (!ezsignsignature_request_compound_local_var) {
        return NULL;
    }
    ezsignsignature_request_compound_local_var->b_ezsignsignature_customdate = b_ezsignsignature_customdate;
    ezsignsignature_request_compound_local_var->a_obj_ezsignsignaturecustomdate = a_obj_ezsignsignaturecustomdate;
    ezsignsignature_request_compound_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    ezsignsignature_request_compound_local_var->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    ezsignsignature_request_compound_local_var->i_ezsignsignature_x = i_ezsignsignature_x;
    ezsignsignature_request_compound_local_var->i_ezsignsignature_y = i_ezsignsignature_y;
    ezsignsignature_request_compound_local_var->i_ezsignsignature_step = i_ezsignsignature_step;
    ezsignsignature_request_compound_local_var->e_ezsignsignature_type = e_ezsignsignature_type;
    ezsignsignature_request_compound_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;

    return ezsignsignature_request_compound_local_var;
}


void ezsignsignature_request_compound_free(ezsignsignature_request_compound_t *ezsignsignature_request_compound) {
    if(NULL == ezsignsignature_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_request_compound->a_obj_ezsignsignaturecustomdate) {
        list_ForEach(listEntry, ezsignsignature_request_compound->a_obj_ezsignsignaturecustomdate) {
            ezsignsignaturecustomdate_request_free(listEntry->data);
        }
        list_freeList(ezsignsignature_request_compound->a_obj_ezsignsignaturecustomdate);
        ezsignsignature_request_compound->a_obj_ezsignsignaturecustomdate = NULL;
    }
    if (ezsignsignature_request_compound->e_ezsignsignature_type) {
        field_e_ezsignsignature_type_free(ezsignsignature_request_compound->e_ezsignsignature_type);
        ezsignsignature_request_compound->e_ezsignsignature_type = NULL;
    }
    free(ezsignsignature_request_compound);
}

cJSON *ezsignsignature_request_compound_convertToJSON(ezsignsignature_request_compound_t *ezsignsignature_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_request_compound->b_ezsignsignature_customdate
    if(ezsignsignature_request_compound->b_ezsignsignature_customdate) { 
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureCustomdate", ezsignsignature_request_compound->b_ezsignsignature_customdate) == NULL) {
    goto fail; //Bool
    }
     } 


    // ezsignsignature_request_compound->a_obj_ezsignsignaturecustomdate
    if(ezsignsignature_request_compound->a_obj_ezsignsignaturecustomdate) { 
    cJSON *a_obj_ezsignsignaturecustomdate = cJSON_AddArrayToObject(item, "a_objEzsignsignaturecustomdate");
    if(a_obj_ezsignsignaturecustomdate == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignaturecustomdateListEntry;
    if (ezsignsignature_request_compound->a_obj_ezsignsignaturecustomdate) {
    list_ForEach(a_obj_ezsignsignaturecustomdateListEntry, ezsignsignature_request_compound->a_obj_ezsignsignaturecustomdate) {
    cJSON *itemLocal = ezsignsignaturecustomdate_request_convertToJSON(a_obj_ezsignsignaturecustomdateListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsignaturecustomdate, itemLocal);
    }
    }
     } 


    // ezsignsignature_request_compound->fki_ezsignfoldersignerassociation_id
    if (!ezsignsignature_request_compound->fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationID", ezsignsignature_request_compound->fki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request_compound->i_ezsignpage_pagenumber
    if (!ezsignsignature_request_compound->i_ezsignpage_pagenumber) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsignpagePagenumber", ezsignsignature_request_compound->i_ezsignpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request_compound->i_ezsignsignature_x
    if (!ezsignsignature_request_compound->i_ezsignsignature_x) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureX", ezsignsignature_request_compound->i_ezsignsignature_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request_compound->i_ezsignsignature_y
    if (!ezsignsignature_request_compound->i_ezsignsignature_y) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureY", ezsignsignature_request_compound->i_ezsignsignature_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request_compound->i_ezsignsignature_step
    if (!ezsignsignature_request_compound->i_ezsignsignature_step) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureStep", ezsignsignature_request_compound->i_ezsignsignature_step) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request_compound->e_ezsignsignature_type
    
    cJSON *e_ezsignsignature_type_local_JSON = field_e_ezsignsignature_type_convertToJSON(ezsignsignature_request_compound->e_ezsignsignature_type);
    if(e_ezsignsignature_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureType", e_ezsignsignature_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignsignature_request_compound->fki_ezsigndocument_id
    if (!ezsignsignature_request_compound->fki_ezsigndocument_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", ezsignsignature_request_compound->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsignature_request_compound_t *ezsignsignature_request_compound_parseFromJSON(cJSON *ezsignsignature_request_compoundJSON){

    ezsignsignature_request_compound_t *ezsignsignature_request_compound_local_var = NULL;

    // define the local variable for ezsignsignature_request_compound->e_ezsignsignature_type
    field_e_ezsignsignature_type_t *e_ezsignsignature_type_local_nonprim = NULL;

    // ezsignsignature_request_compound->b_ezsignsignature_customdate
    cJSON *b_ezsignsignature_customdate = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "bEzsignsignatureCustomdate");
    if (b_ezsignsignature_customdate) { 
    if(!cJSON_IsBool(b_ezsignsignature_customdate))
    {
    goto end; //Bool
    }
    }

    // ezsignsignature_request_compound->a_obj_ezsignsignaturecustomdate
    cJSON *a_obj_ezsignsignaturecustomdate = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "a_objEzsignsignaturecustomdate");
    list_t *a_obj_ezsignsignaturecustomdateList;
    if (a_obj_ezsignsignaturecustomdate) { 
    cJSON *a_obj_ezsignsignaturecustomdate_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_ezsignsignaturecustomdate)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignsignaturecustomdateList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignsignaturecustomdate_local_nonprimitive,a_obj_ezsignsignaturecustomdate )
    {
        if(!cJSON_IsObject(a_obj_ezsignsignaturecustomdate_local_nonprimitive)){
            goto end;
        }
        ezsignsignaturecustomdate_request_t *a_obj_ezsignsignaturecustomdateItem = ezsignsignaturecustomdate_request_parseFromJSON(a_obj_ezsignsignaturecustomdate_local_nonprimitive);

        list_addElement(a_obj_ezsignsignaturecustomdateList, a_obj_ezsignsignaturecustomdateItem);
    }
    }

    // ezsignsignature_request_compound->fki_ezsignfoldersignerassociation_id
    cJSON *fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "fkiEzsignfoldersignerassociationID");
    if (!fki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }

    // ezsignsignature_request_compound->i_ezsignpage_pagenumber
    cJSON *i_ezsignpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "iEzsignpagePagenumber");
    if (!i_ezsignpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsignsignature_request_compound->i_ezsignsignature_x
    cJSON *i_ezsignsignature_x = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "iEzsignsignatureX");
    if (!i_ezsignsignature_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_x))
    {
    goto end; //Numeric
    }

    // ezsignsignature_request_compound->i_ezsignsignature_y
    cJSON *i_ezsignsignature_y = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "iEzsignsignatureY");
    if (!i_ezsignsignature_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_y))
    {
    goto end; //Numeric
    }

    // ezsignsignature_request_compound->i_ezsignsignature_step
    cJSON *i_ezsignsignature_step = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "iEzsignsignatureStep");
    if (!i_ezsignsignature_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_step))
    {
    goto end; //Numeric
    }

    // ezsignsignature_request_compound->e_ezsignsignature_type
    cJSON *e_ezsignsignature_type = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "eEzsignsignatureType");
    if (!e_ezsignsignature_type) {
        goto end;
    }

    
    e_ezsignsignature_type_local_nonprim = field_e_ezsignsignature_type_parseFromJSON(e_ezsignsignature_type); //custom

    // ezsignsignature_request_compound->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compoundJSON, "fkiEzsigndocumentID");
    if (!fki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigndocument_id))
    {
    goto end; //Numeric
    }


    ezsignsignature_request_compound_local_var = ezsignsignature_request_compound_create (
        b_ezsignsignature_customdate ? b_ezsignsignature_customdate->valueint : 0,
        a_obj_ezsignsignaturecustomdate ? a_obj_ezsignsignaturecustomdateList : NULL,
        fki_ezsignfoldersignerassociation_id->valuedouble,
        i_ezsignpage_pagenumber->valuedouble,
        i_ezsignsignature_x->valuedouble,
        i_ezsignsignature_y->valuedouble,
        i_ezsignsignature_step->valuedouble,
        e_ezsignsignature_type_local_nonprim,
        fki_ezsigndocument_id->valuedouble
        );

    return ezsignsignature_request_compound_local_var;
end:
    if (e_ezsignsignature_type_local_nonprim) {
        field_e_ezsignsignature_type_free(e_ezsignsignature_type_local_nonprim);
        e_ezsignsignature_type_local_nonprim = NULL;
    }
    return NULL;

}
