#include <vector>
#include <gtest/gtest.h>
#include "sortingalgorithms.h"


TEST(test001,Quick_sort1){
    std::vector<int> example_1{4, 90, 0, 32, 67};
    std::vector<int> expected{0, 4, 32, 67, 90};
    SortingContext quick_s;
    quick_s.setStrategy(new QuickSort());
    quick_s.sortNumbers(example_1);
    ASSERT_EQ(expected,example_1);
}

TEST(test002,Quick_sort2){
    std::vector<int> example_2{4};
    std::vector<int> expected{4};
    SortingContext quick_s;
    quick_s.setStrategy(new QuickSort());
    quick_s.sortNumbers(example_2);
    ASSERT_EQ(expected,example_2);
}

TEST(test003,Quick_sort3){
    std::vector<int> example_3{4, 5, 6, 7, 8, 9};
    std::vector<int> expected{4, 5, 6, 7, 8, 9};
    SortingContext quick_s;
    quick_s.setStrategy(new QuickSort());
    quick_s.sortNumbers(example_3);
    ASSERT_EQ(expected,example_3);
}

TEST(test004,Merge_sort1){
    std::vector<int> example_4{4, 90, 0, 32, 67};
    std::vector<int> expected{0, 4, 32, 67, 90};
    SortingContext quick_s;
    quick_s.setStrategy(new MergeSort());
    quick_s.sortNumbers(example_4);
    ASSERT_EQ(expected,example_4);
}

TEST(test005,Merge_sort2){
    std::vector<int> example_2{4};
    std::vector<int> expected{4};
    SortingContext quick_s;
    quick_s.setStrategy(new MergeSort());
    quick_s.sortNumbers(example_2);
    ASSERT_EQ(expected,example_2);
}

TEST(test006,Merge_sort3){
    std::vector<int> example_3{4, 5, 6, 7, 8, 9};
    std::vector<int> expected{4, 5, 6, 7, 8, 9};
    SortingContext quick_s;
    quick_s.setStrategy(new MergeSort());
    quick_s.sortNumbers(example_3);
    ASSERT_EQ(expected,example_3);
}

TEST(test007,Insertion_sort1){
    std::vector<int> example_3{4, 5, 6, 7, 8, 9};
    std::vector<int> expected{4, 5, 6, 7, 8, 9};
    SortingContext quick_s;
    quick_s.setStrategy(new InsertionSort());
    quick_s.sortNumbers(example_3);
    ASSERT_EQ(expected,example_3);
}

TEST(test008,Insertion_sort2){
    std::vector<int> example_3{4};
    std::vector<int> expected{4};
    SortingContext quick_s;
    quick_s.setStrategy(new InsertionSort());
    quick_s.sortNumbers(example_3);
    ASSERT_EQ(expected,example_3);
}

TEST(test009,Insertion_sort3){
    std::vector<int> example_3{4, 90, 0, 32, 67};
    std::vector<int> expected{4, 90, 0, 32, 67};
    SortingContext quick_s;
    quick_s.setStrategy(new InsertionSort());
    quick_s.sortNumbers(example_3);
    ASSERT_EQ(expected,example_3);
}

TEST(test010,Selection_sort1){
    std::vector<int> example_3{4, 5, 6, 7, 8, 9};
    std::vector<int> expected{4, 5, 6, 7, 8, 9};
    SortingContext quick_s;
    quick_s.setStrategy(new InsertionSort());
    quick_s.sortNumbers(example_3);
    ASSERT_EQ(expected,example_3);
}

TEST(test011,Selection_sort2){
    std::vector<int> example_3{4};
    std::vector<int> expected{4};
    SortingContext quick_s;
    quick_s.setStrategy(new SelectionSort());
    quick_s.sortNumbers(example_3);
    ASSERT_EQ(expected,example_3);
}

TEST(test012,Selection_sort3){
    std::vector<int> example_3{4, 90, 0, 32, 67};
    std::vector<int> expected{4, 90, 0, 32, 67};
    SortingContext quick_s;
    quick_s.setStrategy(new SelectionSort());
    quick_s.sortNumbers(example_3);
    ASSERT_EQ(expected,example_3);
}


TEST(test013,Coctail_sort1){
    std::vector<int> example_3{4, 5, 6, 7, 8, 9};
    std::vector<int> expected{4, 5, 6, 7, 8, 9};
    SortingContext quick_s;
    quick_s.setStrategy(new CocktailSort());
    quick_s.sortNumbers(example_3);
    ASSERT_EQ(expected,example_3);
}

TEST(test014,Coctail_sort2){
    std::vector<int> example_3{4};
    std::vector<int> expected{4};
    SortingContext quick_s;
    quick_s.setStrategy(new CocktailSort());
    quick_s.sortNumbers(example_3);
    ASSERT_EQ(expected,example_3);
}

TEST(test015,Coctail_sort3){
    std::vector<int> example_3{4, 90, 0, 32, 67};
    std::vector<int> expected{4, 90, 0, 32, 67};
    SortingContext quick_s;
    quick_s.setStrategy(new CocktailSort());
    quick_s.sortNumbers(example_3);
    ASSERT_EQ(expected,example_3);
}




int main(int argc, char*argv[]){

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

}
