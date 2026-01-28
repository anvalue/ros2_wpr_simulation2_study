#include "rclcpp/rclcpp.hpp"

int main(int argc,char * argv[])
{
    // 初始化
    rclcpp::init(argc,argv);
    
    // 创建节点
    auto node = std::make_shared<rclcpp::Node>("my_node");

    // 打印日志信息
    RCLCPP_INFO(node->get_logger(),"hello world!");

    // 保持节点运行
    while(rclcpp::ok()){
        ;
    }

    // 关闭rclcpp
    rclcpp::shutdown();

    return 0;
}