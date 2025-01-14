#ifndef ezdoctemplatefieldtypecategory_autocomplete_element_response_TEST
#define ezdoctemplatefieldtypecategory_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezdoctemplatefieldtypecategory_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezdoctemplatefieldtypecategory_autocomplete_element_response.h"
ezdoctemplatefieldtypecategory_autocomplete_element_response_t* instantiate_ezdoctemplatefieldtypecategory_autocomplete_element_response(int include_optional);



ezdoctemplatefieldtypecategory_autocomplete_element_response_t* instantiate_ezdoctemplatefieldtypecategory_autocomplete_element_response(int include_optional) {
  ezdoctemplatefieldtypecategory_autocomplete_element_response_t* ezdoctemplatefieldtypecategory_autocomplete_element_response = NULL;
  if (include_optional) {
    ezdoctemplatefieldtypecategory_autocomplete_element_response = ezdoctemplatefieldtypecategory_autocomplete_element_response_create(
      4,
      7,
      "Sale",
      true
    );
  } else {
    ezdoctemplatefieldtypecategory_autocomplete_element_response = ezdoctemplatefieldtypecategory_autocomplete_element_response_create(
      4,
      7,
      "Sale",
      true
    );
  }

  return ezdoctemplatefieldtypecategory_autocomplete_element_response;
}


#ifdef ezdoctemplatefieldtypecategory_autocomplete_element_response_MAIN

void test_ezdoctemplatefieldtypecategory_autocomplete_element_response(int include_optional) {
    ezdoctemplatefieldtypecategory_autocomplete_element_response_t* ezdoctemplatefieldtypecategory_autocomplete_element_response_1 = instantiate_ezdoctemplatefieldtypecategory_autocomplete_element_response(include_optional);

	cJSON* jsonezdoctemplatefieldtypecategory_autocomplete_element_response_1 = ezdoctemplatefieldtypecategory_autocomplete_element_response_convertToJSON(ezdoctemplatefieldtypecategory_autocomplete_element_response_1);
	printf("ezdoctemplatefieldtypecategory_autocomplete_element_response :\n%s\n", cJSON_Print(jsonezdoctemplatefieldtypecategory_autocomplete_element_response_1));
	ezdoctemplatefieldtypecategory_autocomplete_element_response_t* ezdoctemplatefieldtypecategory_autocomplete_element_response_2 = ezdoctemplatefieldtypecategory_autocomplete_element_response_parseFromJSON(jsonezdoctemplatefieldtypecategory_autocomplete_element_response_1);
	cJSON* jsonezdoctemplatefieldtypecategory_autocomplete_element_response_2 = ezdoctemplatefieldtypecategory_autocomplete_element_response_convertToJSON(ezdoctemplatefieldtypecategory_autocomplete_element_response_2);
	printf("repeating ezdoctemplatefieldtypecategory_autocomplete_element_response:\n%s\n", cJSON_Print(jsonezdoctemplatefieldtypecategory_autocomplete_element_response_2));
}

int main() {
  test_ezdoctemplatefieldtypecategory_autocomplete_element_response(1);
  test_ezdoctemplatefieldtypecategory_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezdoctemplatefieldtypecategory_autocomplete_element_response_MAIN
#endif // ezdoctemplatefieldtypecategory_autocomplete_element_response_TEST
