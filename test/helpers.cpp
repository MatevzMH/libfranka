#include "helpers.h"

#include <cstdlib>

#include <gtest/gtest.h>

void testRobotStateIsZero(const franka::RobotState& actual) {
  for (size_t i = 0; i < actual.O_T_EE.size(); i++) {
    EXPECT_EQ(0.0, actual.O_T_EE[i]);
  }
  for (size_t i = 0; i < actual.elbow.size(); i++) {
    EXPECT_EQ(0.0, actual.elbow[i]);
  }
  for (size_t i = 0; i < actual.tau_J.size(); i++) {
    EXPECT_EQ(0.0, actual.tau_J[i]);
  }
  for (size_t i = 0; i < actual.dtau_J.size(); i++) {
    EXPECT_EQ(0.0, actual.dtau_J[i]);
  }
  for (size_t i = 0; i < actual.q.size(); i++) {
    EXPECT_EQ(0.0, actual.q[i]);
  }
  for (size_t i = 0; i < actual.dq.size(); i++) {
    EXPECT_EQ(0.0, actual.dq[i]);
  }
  for (size_t i = 0; i < actual.q_d.size(); i++) {
    EXPECT_EQ(0.0, actual.q_d[i]);
  }
  for (size_t i = 0; i < actual.joint_contact.size(); i++) {
    EXPECT_EQ(0.0, actual.joint_contact[i]);
  }
  for (size_t i = 0; i < actual.cartesian_contact.size(); i++) {
    EXPECT_EQ(0.0, actual.cartesian_contact[i]);
  }
  for (size_t i = 0; i < actual.joint_collision.size(); i++) {
    EXPECT_EQ(0.0, actual.joint_collision[i]);
  }
  for (size_t i = 0; i < actual.cartesian_collision.size(); i++) {
    EXPECT_EQ(0.0, actual.cartesian_collision[i]);
  }
  for (size_t i = 0; i < actual.tau_ext_hat_filtered.size(); i++) {
    EXPECT_EQ(0.0, actual.tau_ext_hat_filtered[i]);
  }
  for (size_t i = 0; i < actual.O_F_ext_hat_K.size(); i++) {
    EXPECT_EQ(0.0, actual.O_F_ext_hat_K[i]);
  }
  for (size_t i = 0; i < actual.K_F_ext_hat_K.size(); i++) {
    EXPECT_EQ(0.0, actual.K_F_ext_hat_K[i]);
  }
}

void testRobotStatesAreEqual(const franka::RobotState& expected, const franka::RobotState& actual) {
  for (size_t i = 0; i < actual.O_T_EE.size(); i++) {
    EXPECT_EQ(expected.O_T_EE[i], actual.O_T_EE[i]);
  }
  for (size_t i = 0; i < actual.elbow.size(); i++) {
    EXPECT_EQ(expected.elbow[i], actual.elbow[i]);
  }
  for (size_t i = 0; i < actual.tau_J.size(); i++) {
    EXPECT_EQ(expected.tau_J[i], actual.tau_J[i]);
  }
  for (size_t i = 0; i < actual.dtau_J.size(); i++) {
    EXPECT_EQ(expected.dtau_J[i], actual.dtau_J[i]);
  }
  for (size_t i = 0; i < actual.q.size(); i++) {
    EXPECT_EQ(expected.q[i], actual.q[i]);
  }
  for (size_t i = 0; i < actual.dq.size(); i++) {
    EXPECT_EQ(expected.dq[i], actual.dq[i]);
  }
  for (size_t i = 0; i < actual.q_d.size(); i++) {
    EXPECT_EQ(expected.q_d[i], actual.q_d[i]);
  }
  for (size_t i = 0; i < actual.joint_contact.size(); i++) {
    EXPECT_EQ(expected.joint_contact[i], actual.joint_contact[i]);
  }
  for (size_t i = 0; i < actual.cartesian_contact.size(); i++) {
    EXPECT_EQ(expected.cartesian_contact[i], actual.cartesian_contact[i]);
  }
  for (size_t i = 0; i < actual.joint_collision.size(); i++) {
    EXPECT_EQ(expected.joint_collision[i], actual.joint_collision[i]);
  }
  for (size_t i = 0; i < actual.cartesian_collision.size(); i++) {
    EXPECT_EQ(expected.cartesian_collision[i], actual.cartesian_collision[i]);
  }
  for (size_t i = 0; i < actual.tau_ext_hat_filtered.size(); i++) {
    EXPECT_EQ(expected.tau_ext_hat_filtered[i], actual.tau_ext_hat_filtered[i]);
  }
  for (size_t i = 0; i < actual.O_F_ext_hat_K.size(); i++) {
    EXPECT_EQ(expected.O_F_ext_hat_K[i], actual.O_F_ext_hat_K[i]);
  }
  for (size_t i = 0; i < actual.K_F_ext_hat_K.size(); i++) {
    EXPECT_EQ(expected.K_F_ext_hat_K[i], actual.K_F_ext_hat_K[i]);
  }
}

void testRobotStatesAreEqual(const research_interface::RobotState& expected, const franka::RobotState& actual) {
  for (size_t i = 0; i < actual.O_T_EE.size(); i++) {
    EXPECT_EQ(expected.O_T_EE[i], actual.O_T_EE[i]);
  }
  for (size_t i = 0; i < actual.elbow.size(); i++) {
    EXPECT_EQ(expected.elbow[i], actual.elbow[i]);
  }
  for (size_t i = 0; i < actual.tau_J.size(); i++) {
    EXPECT_EQ(expected.tau_J[i], actual.tau_J[i]);
  }
  for (size_t i = 0; i < actual.dtau_J.size(); i++) {
    EXPECT_EQ(expected.dtau_J[i], actual.dtau_J[i]);
  }
  for (size_t i = 0; i < actual.q.size(); i++) {
    EXPECT_EQ(expected.q[i], actual.q[i]);
  }
  for (size_t i = 0; i < actual.dq.size(); i++) {
    EXPECT_EQ(expected.dq[i], actual.dq[i]);
  }
  for (size_t i = 0; i < actual.q_d.size(); i++) {
    EXPECT_EQ(expected.q_d[i], actual.q_d[i]);
  }
  for (size_t i = 0; i < actual.joint_contact.size(); i++) {
    EXPECT_EQ(expected.joint_contact[i], actual.joint_contact[i]);
  }
  for (size_t i = 0; i < actual.cartesian_contact.size(); i++) {
    EXPECT_EQ(expected.cartesian_contact[i], actual.cartesian_contact[i]);
  }
  for (size_t i = 0; i < actual.joint_collision.size(); i++) {
    EXPECT_EQ(expected.joint_collision[i], actual.joint_collision[i]);
  }
  for (size_t i = 0; i < actual.cartesian_collision.size(); i++) {
    EXPECT_EQ(expected.cartesian_collision[i], actual.cartesian_collision[i]);
  }
  for (size_t i = 0; i < actual.tau_ext_hat_filtered.size(); i++) {
    EXPECT_EQ(expected.tau_ext_hat_filtered[i], actual.tau_ext_hat_filtered[i]);
  }
  for (size_t i = 0; i < actual.O_F_ext_hat_K.size(); i++) {
    EXPECT_EQ(expected.O_F_ext_hat_K[i], actual.O_F_ext_hat_K[i]);
  }
  for (size_t i = 0; i < actual.K_F_ext_hat_K.size(); i++) {
    EXPECT_EQ(expected.K_F_ext_hat_K[i], actual.K_F_ext_hat_K[i]);
  }
}

double randomDouble() {
  return 10.0 * static_cast<double>(std::rand()) / RAND_MAX;
}

void randomRobotState(franka::RobotState& robot_state) {
  for (size_t i = 0; i < robot_state.O_T_EE.size(); i++) {
    robot_state.O_T_EE[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.elbow.size(); i++) {
    robot_state.elbow[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.tau_J.size(); i++) {
    robot_state.tau_J[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.dtau_J.size(); i++) {
    robot_state.dtau_J[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.q.size(); i++) {
    robot_state.q[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.dq.size(); i++) {
    robot_state.dq[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.q_d.size(); i++) {
    robot_state.q_d[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.joint_contact.size(); i++) {
    robot_state.joint_contact[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.cartesian_contact.size(); i++) {
    robot_state.cartesian_contact[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.joint_collision.size(); i++) {
    robot_state.joint_collision[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.cartesian_collision.size(); i++) {
    robot_state.cartesian_collision[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.tau_ext_hat_filtered.size(); i++) {
    robot_state.tau_ext_hat_filtered[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.O_F_ext_hat_K.size(); i++) {
    robot_state.O_F_ext_hat_K[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.K_F_ext_hat_K.size(); i++) {
    robot_state.K_F_ext_hat_K[i] = randomDouble();
  }
}

void randomRobotState(research_interface::RobotState& robot_state) {
  for (size_t i = 0; i < robot_state.O_T_EE.size(); i++) {
    robot_state.O_T_EE[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.elbow.size(); i++) {
    robot_state.elbow[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.tau_J.size(); i++) {
    robot_state.tau_J[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.dtau_J.size(); i++) {
    robot_state.dtau_J[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.q.size(); i++) {
    robot_state.q[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.dq.size(); i++) {
    robot_state.dq[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.q_d.size(); i++) {
    robot_state.q_d[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.joint_contact.size(); i++) {
    robot_state.joint_contact[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.cartesian_contact.size(); i++) {
    robot_state.cartesian_contact[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.joint_collision.size(); i++) {
    robot_state.joint_collision[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.cartesian_collision.size(); i++) {
    robot_state.cartesian_collision[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.tau_ext_hat_filtered.size(); i++) {
    robot_state.tau_ext_hat_filtered[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.O_F_ext_hat_K.size(); i++) {
    robot_state.O_F_ext_hat_K[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_state.K_F_ext_hat_K.size(); i++) {
    robot_state.K_F_ext_hat_K[i] = randomDouble();
  }
  robot_state.message_id = randomDouble();
  robot_state.motion_generator_mode = research_interface::MotionGeneratorMode::kIdle;
  robot_state.external_controller = true;
}

void randomRobotCommand(research_interface::RobotCommand& robot_command) {
  for (size_t i = 0; i < robot_command.motion.q_d.size(); i++) {
    robot_command.motion.q_d[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_command.motion.dq_d.size(); i++) {
    robot_command.motion.dq_d[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_command.motion.ddq_d.size(); i++) {
    robot_command.motion.ddq_d[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_command.motion.O_T_EE_d.size(); i++) {
    robot_command.motion.O_T_EE_d[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_command.motion.O_dP_EE_d.size(); i++) {
    robot_command.motion.O_dP_EE_d[i] = randomDouble();
  }
  for (size_t i = 0; i < robot_command.motion.elbow_d.size(); i++) {
    robot_command.motion.elbow_d[i] = randomDouble();
  }
  robot_command.motion.valid_elbow = true;
  robot_command.motion.motion_generation_finished = true;
  for (size_t i = 0; i < robot_command.control.tau_J_d.size(); i++) {
    robot_command.control.tau_J_d[i] = randomDouble();
  }
  robot_command.message_id = randomDouble();
}

void testRobotCommandsAreEqual(const research_interface::MotionGeneratorCommand& expected, const research_interface::MotionGeneratorCommand& actual) {
  for (size_t i = 0; i < expected.q_d.size(); i++) {
    EXPECT_EQ(expected.q_d[i], actual.q_d[i]);
  }
  for (size_t i = 0; i < expected.dq_d.size(); i++) {
    EXPECT_EQ(expected.dq_d[i], actual.dq_d[i]);
  }
  for (size_t i = 0; i < expected.ddq_d.size(); i++) {
    EXPECT_EQ(expected.ddq_d[i], actual.ddq_d[i]);
  }
  for (size_t i = 0; i < expected.O_T_EE_d.size(); i++) {
    EXPECT_EQ(expected.O_T_EE_d[i], actual.O_T_EE_d[i]);
  }
  for (size_t i = 0; i < expected.O_dP_EE_d.size(); i++) {
    EXPECT_EQ(expected.O_dP_EE_d[i], actual.O_dP_EE_d[i]);
  }
  for (size_t i = 0; i < expected.elbow_d.size(); i++) {
    EXPECT_EQ(expected.elbow_d[i], actual.elbow_d[i]);
  }
  EXPECT_EQ(expected.valid_elbow, actual.valid_elbow);
  EXPECT_EQ(expected.motion_generation_finished, actual.motion_generation_finished);
}
