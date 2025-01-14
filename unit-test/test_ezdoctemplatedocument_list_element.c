#ifndef ezdoctemplatedocument_list_element_TEST
#define ezdoctemplatedocument_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezdoctemplatedocument_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezdoctemplatedocument_list_element.h"
ezdoctemplatedocument_list_element_t* instantiate_ezdoctemplatedocument_list_element(int include_optional);



ezdoctemplatedocument_list_element_t* instantiate_ezdoctemplatedocument_list_element(int include_optional) {
  ezdoctemplatedocument_list_element_t* ezdoctemplatedocument_list_element = NULL;
  if (include_optional) {
    ezdoctemplatedocument_list_element = ezdoctemplatedocument_list_element_create(
      95,
      2,
      5,
      7,
      4,
      "Default",
      "Real Estate",
      "Sale",
      ezmax_api_definition__full_ezdoctemplatedocument_list_element__Company,
      true,
      "Standard Contract"
    );
  } else {
    ezdoctemplatedocument_list_element = ezdoctemplatedocument_list_element_create(
      95,
      2,
      5,
      7,
      4,
      "Default",
      "Real Estate",
      "Sale",
      ezmax_api_definition__full_ezdoctemplatedocument_list_element__Company,
      true,
      "Standard Contract"
    );
  }

  return ezdoctemplatedocument_list_element;
}


#ifdef ezdoctemplatedocument_list_element_MAIN

void test_ezdoctemplatedocument_list_element(int include_optional) {
    ezdoctemplatedocument_list_element_t* ezdoctemplatedocument_list_element_1 = instantiate_ezdoctemplatedocument_list_element(include_optional);

	cJSON* jsonezdoctemplatedocument_list_element_1 = ezdoctemplatedocument_list_element_convertToJSON(ezdoctemplatedocument_list_element_1);
	printf("ezdoctemplatedocument_list_element :\n%s\n", cJSON_Print(jsonezdoctemplatedocument_list_element_1));
	ezdoctemplatedocument_list_element_t* ezdoctemplatedocument_list_element_2 = ezdoctemplatedocument_list_element_parseFromJSON(jsonezdoctemplatedocument_list_element_1);
	cJSON* jsonezdoctemplatedocument_list_element_2 = ezdoctemplatedocument_list_element_convertToJSON(ezdoctemplatedocument_list_element_2);
	printf("repeating ezdoctemplatedocument_list_element:\n%s\n", cJSON_Print(jsonezdoctemplatedocument_list_element_2));
}

int main() {
  test_ezdoctemplatedocument_list_element(1);
  test_ezdoctemplatedocument_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezdoctemplatedocument_list_element_MAIN
#endif // ezdoctemplatedocument_list_element_TEST
