#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_reportcellstyle.h"


char* common_reportcellstyle_e_reportcell_horizontalalignment_ToString(ezmax_api_definition__full_common_reportcellstyle__e e_reportcell_horizontalalignment) {
    char* e_reportcell_horizontalalignmentArray[] =  { "NULL", "Center", "Left", "Right" };
    return e_reportcell_horizontalalignmentArray[e_reportcell_horizontalalignment];
}

ezmax_api_definition__full_common_reportcellstyle__e common_reportcellstyle_e_reportcell_horizontalalignment_FromString(char* e_reportcell_horizontalalignment){
    int stringToReturn = 0;
    char *e_reportcell_horizontalalignmentArray[] =  { "NULL", "Center", "Left", "Right" };
    size_t sizeofArray = sizeof(e_reportcell_horizontalalignmentArray) / sizeof(e_reportcell_horizontalalignmentArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_reportcell_horizontalalignment, e_reportcell_horizontalalignmentArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* common_reportcellstyle_e_reportcell_verticalalignment_ToString(ezmax_api_definition__full_common_reportcellstyle__e e_reportcell_verticalalignment) {
    char* e_reportcell_verticalalignmentArray[] =  { "NULL", "Bottom", "Middle", "Top" };
    return e_reportcell_verticalalignmentArray[e_reportcell_verticalalignment];
}

ezmax_api_definition__full_common_reportcellstyle__e common_reportcellstyle_e_reportcell_verticalalignment_FromString(char* e_reportcell_verticalalignment){
    int stringToReturn = 0;
    char *e_reportcell_verticalalignmentArray[] =  { "NULL", "Bottom", "Middle", "Top" };
    size_t sizeofArray = sizeof(e_reportcell_verticalalignmentArray) / sizeof(e_reportcell_verticalalignmentArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_reportcell_verticalalignment, e_reportcell_verticalalignmentArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* common_reportcellstyle_e_reportcell_fontweight_ToString(ezmax_api_definition__full_common_reportcellstyle__e e_reportcell_fontweight) {
    char* e_reportcell_fontweightArray[] =  { "NULL", "Normal", "Bold" };
    return e_reportcell_fontweightArray[e_reportcell_fontweight];
}

ezmax_api_definition__full_common_reportcellstyle__e common_reportcellstyle_e_reportcell_fontweight_FromString(char* e_reportcell_fontweight){
    int stringToReturn = 0;
    char *e_reportcell_fontweightArray[] =  { "NULL", "Normal", "Bold" };
    size_t sizeofArray = sizeof(e_reportcell_fontweightArray) / sizeof(e_reportcell_fontweightArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_reportcell_fontweight, e_reportcell_fontweightArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* common_reportcellstyle_e_reportcell_fontunderline_ToString(ezmax_api_definition__full_common_reportcellstyle__e e_reportcell_fontunderline) {
    char* e_reportcell_fontunderlineArray[] =  { "NULL", "None", "Single", "Double" };
    return e_reportcell_fontunderlineArray[e_reportcell_fontunderline];
}

ezmax_api_definition__full_common_reportcellstyle__e common_reportcellstyle_e_reportcell_fontunderline_FromString(char* e_reportcell_fontunderline){
    int stringToReturn = 0;
    char *e_reportcell_fontunderlineArray[] =  { "NULL", "None", "Single", "Double" };
    size_t sizeofArray = sizeof(e_reportcell_fontunderlineArray) / sizeof(e_reportcell_fontunderlineArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_reportcell_fontunderline, e_reportcell_fontunderlineArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

common_reportcellstyle_t *common_reportcellstyle_create(
    int b_reportcellstyle_bordertop,
    int b_reportcellstyle_borderbottom,
    int b_reportcellstyle_borderleft,
    int b_reportcellstyle_borderright,
    enum_horizontalalignment_t *e_reportcell_horizontalalignment,
    enum_verticalalignment_t *e_reportcell_verticalalignment,
    enum_fontweight_t *e_reportcell_fontweight,
    enum_fontunderline_t *e_reportcell_fontunderline
    ) {
    common_reportcellstyle_t *common_reportcellstyle_local_var = malloc(sizeof(common_reportcellstyle_t));
    if (!common_reportcellstyle_local_var) {
        return NULL;
    }
    common_reportcellstyle_local_var->b_reportcellstyle_bordertop = b_reportcellstyle_bordertop;
    common_reportcellstyle_local_var->b_reportcellstyle_borderbottom = b_reportcellstyle_borderbottom;
    common_reportcellstyle_local_var->b_reportcellstyle_borderleft = b_reportcellstyle_borderleft;
    common_reportcellstyle_local_var->b_reportcellstyle_borderright = b_reportcellstyle_borderright;
    common_reportcellstyle_local_var->e_reportcell_horizontalalignment = e_reportcell_horizontalalignment;
    common_reportcellstyle_local_var->e_reportcell_verticalalignment = e_reportcell_verticalalignment;
    common_reportcellstyle_local_var->e_reportcell_fontweight = e_reportcell_fontweight;
    common_reportcellstyle_local_var->e_reportcell_fontunderline = e_reportcell_fontunderline;

    return common_reportcellstyle_local_var;
}


void common_reportcellstyle_free(common_reportcellstyle_t *common_reportcellstyle) {
    if(NULL == common_reportcellstyle){
        return ;
    }
    listEntry_t *listEntry;
    if (common_reportcellstyle->e_reportcell_horizontalalignment) {
        enum_horizontalalignment_free(common_reportcellstyle->e_reportcell_horizontalalignment);
        common_reportcellstyle->e_reportcell_horizontalalignment = NULL;
    }
    if (common_reportcellstyle->e_reportcell_verticalalignment) {
        enum_verticalalignment_free(common_reportcellstyle->e_reportcell_verticalalignment);
        common_reportcellstyle->e_reportcell_verticalalignment = NULL;
    }
    if (common_reportcellstyle->e_reportcell_fontweight) {
        enum_fontweight_free(common_reportcellstyle->e_reportcell_fontweight);
        common_reportcellstyle->e_reportcell_fontweight = NULL;
    }
    if (common_reportcellstyle->e_reportcell_fontunderline) {
        enum_fontunderline_free(common_reportcellstyle->e_reportcell_fontunderline);
        common_reportcellstyle->e_reportcell_fontunderline = NULL;
    }
    free(common_reportcellstyle);
}

cJSON *common_reportcellstyle_convertToJSON(common_reportcellstyle_t *common_reportcellstyle) {
    cJSON *item = cJSON_CreateObject();

    // common_reportcellstyle->b_reportcellstyle_bordertop
    if (!common_reportcellstyle->b_reportcellstyle_bordertop) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bReportcellstyleBordertop", common_reportcellstyle->b_reportcellstyle_bordertop) == NULL) {
    goto fail; //Bool
    }


    // common_reportcellstyle->b_reportcellstyle_borderbottom
    if (!common_reportcellstyle->b_reportcellstyle_borderbottom) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bReportcellstyleBorderbottom", common_reportcellstyle->b_reportcellstyle_borderbottom) == NULL) {
    goto fail; //Bool
    }


    // common_reportcellstyle->b_reportcellstyle_borderleft
    if (!common_reportcellstyle->b_reportcellstyle_borderleft) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bReportcellstyleBorderleft", common_reportcellstyle->b_reportcellstyle_borderleft) == NULL) {
    goto fail; //Bool
    }


    // common_reportcellstyle->b_reportcellstyle_borderright
    if (!common_reportcellstyle->b_reportcellstyle_borderright) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bReportcellstyleBorderright", common_reportcellstyle->b_reportcellstyle_borderright) == NULL) {
    goto fail; //Bool
    }


    // common_reportcellstyle->e_reportcell_horizontalalignment
    if (ezmax_api_definition__full_common_reportcellstyle__NULL == common_reportcellstyle->e_reportcell_horizontalalignment) {
        goto fail;
    }
    cJSON *e_reportcell_horizontalalignment_local_JSON = enum_horizontalalignment_convertToJSON(common_reportcellstyle->e_reportcell_horizontalalignment);
    if(e_reportcell_horizontalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eReportcellHorizontalalignment", e_reportcell_horizontalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // common_reportcellstyle->e_reportcell_verticalalignment
    if (ezmax_api_definition__full_common_reportcellstyle__NULL == common_reportcellstyle->e_reportcell_verticalalignment) {
        goto fail;
    }
    cJSON *e_reportcell_verticalalignment_local_JSON = enum_verticalalignment_convertToJSON(common_reportcellstyle->e_reportcell_verticalalignment);
    if(e_reportcell_verticalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eReportcellVerticalalignment", e_reportcell_verticalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // common_reportcellstyle->e_reportcell_fontweight
    if (ezmax_api_definition__full_common_reportcellstyle__NULL == common_reportcellstyle->e_reportcell_fontweight) {
        goto fail;
    }
    cJSON *e_reportcell_fontweight_local_JSON = enum_fontweight_convertToJSON(common_reportcellstyle->e_reportcell_fontweight);
    if(e_reportcell_fontweight_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eReportcellFontweight", e_reportcell_fontweight_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // common_reportcellstyle->e_reportcell_fontunderline
    if (ezmax_api_definition__full_common_reportcellstyle__NULL == common_reportcellstyle->e_reportcell_fontunderline) {
        goto fail;
    }
    cJSON *e_reportcell_fontunderline_local_JSON = enum_fontunderline_convertToJSON(common_reportcellstyle->e_reportcell_fontunderline);
    if(e_reportcell_fontunderline_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eReportcellFontunderline", e_reportcell_fontunderline_local_JSON);
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

common_reportcellstyle_t *common_reportcellstyle_parseFromJSON(cJSON *common_reportcellstyleJSON){

    common_reportcellstyle_t *common_reportcellstyle_local_var = NULL;

    // define the local variable for common_reportcellstyle->e_reportcell_horizontalalignment
    enum_horizontalalignment_t *e_reportcell_horizontalalignment_local_nonprim = NULL;

    // define the local variable for common_reportcellstyle->e_reportcell_verticalalignment
    enum_verticalalignment_t *e_reportcell_verticalalignment_local_nonprim = NULL;

    // define the local variable for common_reportcellstyle->e_reportcell_fontweight
    enum_fontweight_t *e_reportcell_fontweight_local_nonprim = NULL;

    // define the local variable for common_reportcellstyle->e_reportcell_fontunderline
    enum_fontunderline_t *e_reportcell_fontunderline_local_nonprim = NULL;

    // common_reportcellstyle->b_reportcellstyle_bordertop
    cJSON *b_reportcellstyle_bordertop = cJSON_GetObjectItemCaseSensitive(common_reportcellstyleJSON, "bReportcellstyleBordertop");
    if (!b_reportcellstyle_bordertop) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_reportcellstyle_bordertop))
    {
    goto end; //Bool
    }

    // common_reportcellstyle->b_reportcellstyle_borderbottom
    cJSON *b_reportcellstyle_borderbottom = cJSON_GetObjectItemCaseSensitive(common_reportcellstyleJSON, "bReportcellstyleBorderbottom");
    if (!b_reportcellstyle_borderbottom) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_reportcellstyle_borderbottom))
    {
    goto end; //Bool
    }

    // common_reportcellstyle->b_reportcellstyle_borderleft
    cJSON *b_reportcellstyle_borderleft = cJSON_GetObjectItemCaseSensitive(common_reportcellstyleJSON, "bReportcellstyleBorderleft");
    if (!b_reportcellstyle_borderleft) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_reportcellstyle_borderleft))
    {
    goto end; //Bool
    }

    // common_reportcellstyle->b_reportcellstyle_borderright
    cJSON *b_reportcellstyle_borderright = cJSON_GetObjectItemCaseSensitive(common_reportcellstyleJSON, "bReportcellstyleBorderright");
    if (!b_reportcellstyle_borderright) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_reportcellstyle_borderright))
    {
    goto end; //Bool
    }

    // common_reportcellstyle->e_reportcell_horizontalalignment
    cJSON *e_reportcell_horizontalalignment = cJSON_GetObjectItemCaseSensitive(common_reportcellstyleJSON, "eReportcellHorizontalalignment");
    if (!e_reportcell_horizontalalignment) {
        goto end;
    }

    
    e_reportcell_horizontalalignment_local_nonprim = enum_horizontalalignment_parseFromJSON(e_reportcell_horizontalalignment); //custom

    // common_reportcellstyle->e_reportcell_verticalalignment
    cJSON *e_reportcell_verticalalignment = cJSON_GetObjectItemCaseSensitive(common_reportcellstyleJSON, "eReportcellVerticalalignment");
    if (!e_reportcell_verticalalignment) {
        goto end;
    }

    
    e_reportcell_verticalalignment_local_nonprim = enum_verticalalignment_parseFromJSON(e_reportcell_verticalalignment); //custom

    // common_reportcellstyle->e_reportcell_fontweight
    cJSON *e_reportcell_fontweight = cJSON_GetObjectItemCaseSensitive(common_reportcellstyleJSON, "eReportcellFontweight");
    if (!e_reportcell_fontweight) {
        goto end;
    }

    
    e_reportcell_fontweight_local_nonprim = enum_fontweight_parseFromJSON(e_reportcell_fontweight); //custom

    // common_reportcellstyle->e_reportcell_fontunderline
    cJSON *e_reportcell_fontunderline = cJSON_GetObjectItemCaseSensitive(common_reportcellstyleJSON, "eReportcellFontunderline");
    if (!e_reportcell_fontunderline) {
        goto end;
    }

    
    e_reportcell_fontunderline_local_nonprim = enum_fontunderline_parseFromJSON(e_reportcell_fontunderline); //custom


    common_reportcellstyle_local_var = common_reportcellstyle_create (
        b_reportcellstyle_bordertop->valueint,
        b_reportcellstyle_borderbottom->valueint,
        b_reportcellstyle_borderleft->valueint,
        b_reportcellstyle_borderright->valueint,
        e_reportcell_horizontalalignment_local_nonprim,
        e_reportcell_verticalalignment_local_nonprim,
        e_reportcell_fontweight_local_nonprim,
        e_reportcell_fontunderline_local_nonprim
        );

    return common_reportcellstyle_local_var;
end:
    if (e_reportcell_horizontalalignment_local_nonprim) {
        enum_horizontalalignment_free(e_reportcell_horizontalalignment_local_nonprim);
        e_reportcell_horizontalalignment_local_nonprim = NULL;
    }
    if (e_reportcell_verticalalignment_local_nonprim) {
        enum_verticalalignment_free(e_reportcell_verticalalignment_local_nonprim);
        e_reportcell_verticalalignment_local_nonprim = NULL;
    }
    if (e_reportcell_fontweight_local_nonprim) {
        enum_fontweight_free(e_reportcell_fontweight_local_nonprim);
        e_reportcell_fontweight_local_nonprim = NULL;
    }
    if (e_reportcell_fontunderline_local_nonprim) {
        enum_fontunderline_free(e_reportcell_fontunderline_local_nonprim);
        e_reportcell_fontunderline_local_nonprim = NULL;
    }
    return NULL;

}
