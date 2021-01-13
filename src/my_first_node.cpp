#include "rclcpp/rclcpp.hpp"

int main(int argc, char **argv){
    rclcpp::init(argc, argv);

    // learn about shared pointers - used by ROS2 all the time!
    auto node = std::make_shared<rclcpp::Node>("cpp_test");
    RCLCPP_INFO(node->get_logger(), "Hello C++ world");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
