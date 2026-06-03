#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_reportsubsection.h"



static common_reportsubsection_t *common_reportsubsection_create_internal(
    list_t *a_obj_reportcolumn,
    int *i_reportsubsection_columncount,
    int *i_reportsubsection_width,
    common_reportsubsectionpart_t *obj_reportsubsectionpart_header,
    common_reportsubsectionpart_t *obj_reportsubsectionpart_body,
    common_reportsubsectionpart_t *obj_reportsubsectionpart_footer,
    char *s_reportsubsection_title
    ) {
    common_reportsubsection_t *common_reportsubsection_local_var = malloc(sizeof(common_reportsubsection_t));
    if (!common_reportsubsection_local_var) {
        return NULL;
    }
    memset(common_reportsubsection_local_var, 0, sizeof(common_reportsubsection_t));
    common_reportsubsection_local_var->_library_owned = 1;
    common_reportsubsection_local_var->a_obj_reportcolumn = a_obj_reportcolumn;
    common_reportsubsection_local_var->i_reportsubsection_columncount = i_reportsubsection_columncount;
    common_reportsubsection_local_var->i_reportsubsection_width = i_reportsubsection_width;
    common_reportsubsection_local_var->obj_reportsubsectionpart_header = obj_reportsubsectionpart_header;
    common_reportsubsection_local_var->obj_reportsubsectionpart_body = obj_reportsubsectionpart_body;
    common_reportsubsection_local_var->obj_reportsubsectionpart_footer = obj_reportsubsectionpart_footer;
    common_reportsubsection_local_var->s_reportsubsection_title = s_reportsubsection_title;
    return common_reportsubsection_local_var;
}

__attribute__((deprecated)) common_reportsubsection_t *common_reportsubsection_create(
    list_t *a_obj_reportcolumn,
    int *i_reportsubsection_columncount,
    int *i_reportsubsection_width,
    common_reportsubsectionpart_t *obj_reportsubsectionpart_header,
    common_reportsubsectionpart_t *obj_reportsubsectionpart_body,
    common_reportsubsectionpart_t *obj_reportsubsectionpart_footer,
    char *s_reportsubsection_title
    ) {
    int *i_reportsubsection_columncount_copy = NULL;
    if (i_reportsubsection_columncount) {
        i_reportsubsection_columncount_copy = malloc(sizeof(int));
        if (i_reportsubsection_columncount_copy) *i_reportsubsection_columncount_copy = *i_reportsubsection_columncount;
    }
    int *i_reportsubsection_width_copy = NULL;
    if (i_reportsubsection_width) {
        i_reportsubsection_width_copy = malloc(sizeof(int));
        if (i_reportsubsection_width_copy) *i_reportsubsection_width_copy = *i_reportsubsection_width;
    }
    common_reportsubsection_t *result = common_reportsubsection_create_internal (
        a_obj_reportcolumn,
        i_reportsubsection_columncount_copy,
        i_reportsubsection_width_copy,
        obj_reportsubsectionpart_header,
        obj_reportsubsectionpart_body,
        obj_reportsubsectionpart_footer,
        s_reportsubsection_title
        );
    if (!result) {
        free(i_reportsubsection_columncount_copy);
        free(i_reportsubsection_width_copy);
    }
    return result;
}

void common_reportsubsection_free(common_reportsubsection_t *common_reportsubsection) {
    if(NULL == common_reportsubsection){
        return ;
    }
    if(common_reportsubsection->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "common_reportsubsection_free");
        return ;
    }
    listEntry_t *listEntry;
    if (common_reportsubsection->a_obj_reportcolumn) {
        list_ForEach(listEntry, common_reportsubsection->a_obj_reportcolumn) {
            common_reportcolumn_free(listEntry->data);
        }
        list_freeList(common_reportsubsection->a_obj_reportcolumn);
        common_reportsubsection->a_obj_reportcolumn = NULL;
    }
    if (common_reportsubsection->i_reportsubsection_columncount) {
        free(common_reportsubsection->i_reportsubsection_columncount);
        common_reportsubsection->i_reportsubsection_columncount = NULL;
    }
    if (common_reportsubsection->i_reportsubsection_width) {
        free(common_reportsubsection->i_reportsubsection_width);
        common_reportsubsection->i_reportsubsection_width = NULL;
    }
    if (common_reportsubsection->obj_reportsubsectionpart_header) {
        common_reportsubsectionpart_free(common_reportsubsection->obj_reportsubsectionpart_header);
        common_reportsubsection->obj_reportsubsectionpart_header = NULL;
    }
    if (common_reportsubsection->obj_reportsubsectionpart_body) {
        common_reportsubsectionpart_free(common_reportsubsection->obj_reportsubsectionpart_body);
        common_reportsubsection->obj_reportsubsectionpart_body = NULL;
    }
    if (common_reportsubsection->obj_reportsubsectionpart_footer) {
        common_reportsubsectionpart_free(common_reportsubsection->obj_reportsubsectionpart_footer);
        common_reportsubsection->obj_reportsubsectionpart_footer = NULL;
    }
    if (common_reportsubsection->s_reportsubsection_title) {
        free(common_reportsubsection->s_reportsubsection_title);
        common_reportsubsection->s_reportsubsection_title = NULL;
    }
    free(common_reportsubsection);
}

cJSON *common_reportsubsection_convertToJSON(common_reportsubsection_t *common_reportsubsection) {
    cJSON *item = cJSON_CreateObject();

    // common_reportsubsection->a_obj_reportcolumn
    if (!common_reportsubsection->a_obj_reportcolumn) {
        goto fail;
    }
    cJSON *a_obj_reportcolumn = cJSON_AddArrayToObject(item, "a_objReportcolumn");
    if(a_obj_reportcolumn == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_reportcolumnListEntry;
    if (common_reportsubsection->a_obj_reportcolumn) {
    list_ForEach(a_obj_reportcolumnListEntry, common_reportsubsection->a_obj_reportcolumn) {
    cJSON *itemLocal = common_reportcolumn_convertToJSON(a_obj_reportcolumnListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_reportcolumn, itemLocal);
    }
    }


    // common_reportsubsection->i_reportsubsection_columncount
    if (!common_reportsubsection->i_reportsubsection_columncount) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iReportsubsectionColumncount", *common_reportsubsection->i_reportsubsection_columncount) == NULL) {
    goto fail; //Numeric
    }


    // common_reportsubsection->i_reportsubsection_width
    if (!common_reportsubsection->i_reportsubsection_width) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iReportsubsectionWidth", *common_reportsubsection->i_reportsubsection_width) == NULL) {
    goto fail; //Numeric
    }


    // common_reportsubsection->obj_reportsubsectionpart_header
    if (!common_reportsubsection->obj_reportsubsectionpart_header) {
        goto fail;
    }
    cJSON *obj_reportsubsectionpart_header_local_JSON = common_reportsubsectionpart_convertToJSON(common_reportsubsection->obj_reportsubsectionpart_header);
    if(obj_reportsubsectionpart_header_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objReportsubsectionpartHeader", obj_reportsubsectionpart_header_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // common_reportsubsection->obj_reportsubsectionpart_body
    if (!common_reportsubsection->obj_reportsubsectionpart_body) {
        goto fail;
    }
    cJSON *obj_reportsubsectionpart_body_local_JSON = common_reportsubsectionpart_convertToJSON(common_reportsubsection->obj_reportsubsectionpart_body);
    if(obj_reportsubsectionpart_body_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objReportsubsectionpartBody", obj_reportsubsectionpart_body_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // common_reportsubsection->obj_reportsubsectionpart_footer
    if (!common_reportsubsection->obj_reportsubsectionpart_footer) {
        goto fail;
    }
    cJSON *obj_reportsubsectionpart_footer_local_JSON = common_reportsubsectionpart_convertToJSON(common_reportsubsection->obj_reportsubsectionpart_footer);
    if(obj_reportsubsectionpart_footer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objReportsubsectionpartFooter", obj_reportsubsectionpart_footer_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // common_reportsubsection->s_reportsubsection_title
    if(common_reportsubsection->s_reportsubsection_title) {
    if(cJSON_AddStringToObject(item, "sReportsubsectionTitle", common_reportsubsection->s_reportsubsection_title) == NULL) {
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

common_reportsubsection_t *common_reportsubsection_parseFromJSON(cJSON *common_reportsubsectionJSON){

    common_reportsubsection_t *common_reportsubsection_local_var = NULL;

    // define the local list for common_reportsubsection->a_obj_reportcolumn
    list_t *a_obj_reportcolumnList = NULL;

    // define the local variable for common_reportsubsection->i_reportsubsection_columncount
    int *i_reportsubsection_columncount_local_var = NULL;

    // define the local variable for common_reportsubsection->i_reportsubsection_width
    int *i_reportsubsection_width_local_var = NULL;

    // define the local variable for common_reportsubsection->obj_reportsubsectionpart_header
    common_reportsubsectionpart_t *obj_reportsubsectionpart_header_local_nonprim = NULL;

    // define the local variable for common_reportsubsection->obj_reportsubsectionpart_body
    common_reportsubsectionpart_t *obj_reportsubsectionpart_body_local_nonprim = NULL;

    // define the local variable for common_reportsubsection->obj_reportsubsectionpart_footer
    common_reportsubsectionpart_t *obj_reportsubsectionpart_footer_local_nonprim = NULL;

    char *s_reportsubsection_title_local_str = NULL;

    // common_reportsubsection->a_obj_reportcolumn
    cJSON *a_obj_reportcolumn = cJSON_GetObjectItemCaseSensitive(common_reportsubsectionJSON, "a_objReportcolumn");
    if (cJSON_IsNull(a_obj_reportcolumn)) {
        a_obj_reportcolumn = NULL;
    }
    if (!a_obj_reportcolumn) {
        goto end;
    }

    
    cJSON *a_obj_reportcolumn_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_reportcolumn)){
        goto end; //nonprimitive container
    }

    a_obj_reportcolumnList = list_createList();

    cJSON_ArrayForEach(a_obj_reportcolumn_local_nonprimitive,a_obj_reportcolumn )
    {
        if(!cJSON_IsObject(a_obj_reportcolumn_local_nonprimitive)){
            goto end;
        }
        common_reportcolumn_t *a_obj_reportcolumnItem = common_reportcolumn_parseFromJSON(a_obj_reportcolumn_local_nonprimitive);

        list_addElement(a_obj_reportcolumnList, a_obj_reportcolumnItem);
    }

    // common_reportsubsection->i_reportsubsection_columncount
    cJSON *i_reportsubsection_columncount = cJSON_GetObjectItemCaseSensitive(common_reportsubsectionJSON, "iReportsubsectionColumncount");
    if (cJSON_IsNull(i_reportsubsection_columncount)) {
        i_reportsubsection_columncount = NULL;
    }
    if (!i_reportsubsection_columncount) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_reportsubsection_columncount))
    {
    goto end; //Numeric
    }
    i_reportsubsection_columncount_local_var = malloc(sizeof(int));
    if(!i_reportsubsection_columncount_local_var)
    {
        goto end;
    }
    *i_reportsubsection_columncount_local_var = i_reportsubsection_columncount->valuedouble;

    // common_reportsubsection->i_reportsubsection_width
    cJSON *i_reportsubsection_width = cJSON_GetObjectItemCaseSensitive(common_reportsubsectionJSON, "iReportsubsectionWidth");
    if (cJSON_IsNull(i_reportsubsection_width)) {
        i_reportsubsection_width = NULL;
    }
    if (!i_reportsubsection_width) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_reportsubsection_width))
    {
    goto end; //Numeric
    }
    i_reportsubsection_width_local_var = malloc(sizeof(int));
    if(!i_reportsubsection_width_local_var)
    {
        goto end;
    }
    *i_reportsubsection_width_local_var = i_reportsubsection_width->valuedouble;

    // common_reportsubsection->obj_reportsubsectionpart_header
    cJSON *obj_reportsubsectionpart_header = cJSON_GetObjectItemCaseSensitive(common_reportsubsectionJSON, "objReportsubsectionpartHeader");
    if (cJSON_IsNull(obj_reportsubsectionpart_header)) {
        obj_reportsubsectionpart_header = NULL;
    }
    if (!obj_reportsubsectionpart_header) {
        goto end;
    }

    
    obj_reportsubsectionpart_header_local_nonprim = common_reportsubsectionpart_parseFromJSON(obj_reportsubsectionpart_header); //nonprimitive

    // common_reportsubsection->obj_reportsubsectionpart_body
    cJSON *obj_reportsubsectionpart_body = cJSON_GetObjectItemCaseSensitive(common_reportsubsectionJSON, "objReportsubsectionpartBody");
    if (cJSON_IsNull(obj_reportsubsectionpart_body)) {
        obj_reportsubsectionpart_body = NULL;
    }
    if (!obj_reportsubsectionpart_body) {
        goto end;
    }

    
    obj_reportsubsectionpart_body_local_nonprim = common_reportsubsectionpart_parseFromJSON(obj_reportsubsectionpart_body); //nonprimitive

    // common_reportsubsection->obj_reportsubsectionpart_footer
    cJSON *obj_reportsubsectionpart_footer = cJSON_GetObjectItemCaseSensitive(common_reportsubsectionJSON, "objReportsubsectionpartFooter");
    if (cJSON_IsNull(obj_reportsubsectionpart_footer)) {
        obj_reportsubsectionpart_footer = NULL;
    }
    if (!obj_reportsubsectionpart_footer) {
        goto end;
    }

    
    obj_reportsubsectionpart_footer_local_nonprim = common_reportsubsectionpart_parseFromJSON(obj_reportsubsectionpart_footer); //nonprimitive

    // common_reportsubsection->s_reportsubsection_title
    cJSON *s_reportsubsection_title = cJSON_GetObjectItemCaseSensitive(common_reportsubsectionJSON, "sReportsubsectionTitle");
    if (cJSON_IsNull(s_reportsubsection_title)) {
        s_reportsubsection_title = NULL;
    }
    if (s_reportsubsection_title) { 
    if(!cJSON_IsString(s_reportsubsection_title) && !cJSON_IsNull(s_reportsubsection_title))
    {
    goto end; //String
    }
    }


    if (s_reportsubsection_title && !cJSON_IsNull(s_reportsubsection_title)) s_reportsubsection_title_local_str = strdup(s_reportsubsection_title->valuestring);

    common_reportsubsection_local_var = common_reportsubsection_create_internal (
        a_obj_reportcolumnList,
        i_reportsubsection_columncount_local_var,
        i_reportsubsection_width_local_var,
        obj_reportsubsectionpart_header_local_nonprim,
        obj_reportsubsectionpart_body_local_nonprim,
        obj_reportsubsectionpart_footer_local_nonprim,
        s_reportsubsection_title_local_str
        );

    if (!common_reportsubsection_local_var) {
        goto end;
    }

    return common_reportsubsection_local_var;
end:
    if (a_obj_reportcolumnList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_reportcolumnList) {
            common_reportcolumn_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_reportcolumnList);
        a_obj_reportcolumnList = NULL;
    }
    if (i_reportsubsection_columncount_local_var) {
        free(i_reportsubsection_columncount_local_var);
        i_reportsubsection_columncount_local_var = NULL;
    }
    if (i_reportsubsection_width_local_var) {
        free(i_reportsubsection_width_local_var);
        i_reportsubsection_width_local_var = NULL;
    }
    if (obj_reportsubsectionpart_header_local_nonprim) {
        common_reportsubsectionpart_free(obj_reportsubsectionpart_header_local_nonprim);
        obj_reportsubsectionpart_header_local_nonprim = NULL;
    }
    if (obj_reportsubsectionpart_body_local_nonprim) {
        common_reportsubsectionpart_free(obj_reportsubsectionpart_body_local_nonprim);
        obj_reportsubsectionpart_body_local_nonprim = NULL;
    }
    if (obj_reportsubsectionpart_footer_local_nonprim) {
        common_reportsubsectionpart_free(obj_reportsubsectionpart_footer_local_nonprim);
        obj_reportsubsectionpart_footer_local_nonprim = NULL;
    }
    if (s_reportsubsection_title_local_str) {
        free(s_reportsubsection_title_local_str);
        s_reportsubsection_title_local_str = NULL;
    }
    return NULL;

}
