// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _axis_to_ddr_writer_HH_
#define _axis_to_ddr_writer_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "axis_to_ddr_writebkb.h"
#include "axis_to_ddr_writer_AXILiteS_s_axi.h"
#include "axis_to_ddr_writer_base_ddr_addr_m_axi.h"

namespace ap_rtl {

template<unsigned int C_M_AXI_BASE_DDR_ADDR_ADDR_WIDTH = 32,
         unsigned int C_M_AXI_BASE_DDR_ADDR_ID_WIDTH = 1,
         unsigned int C_M_AXI_BASE_DDR_ADDR_AWUSER_WIDTH = 1,
         unsigned int C_M_AXI_BASE_DDR_ADDR_DATA_WIDTH = 64,
         unsigned int C_M_AXI_BASE_DDR_ADDR_WUSER_WIDTH = 1,
         unsigned int C_M_AXI_BASE_DDR_ADDR_ARUSER_WIDTH = 1,
         unsigned int C_M_AXI_BASE_DDR_ADDR_RUSER_WIDTH = 1,
         unsigned int C_M_AXI_BASE_DDR_ADDR_BUSER_WIDTH = 1,
         unsigned int C_S_AXI_AXILITES_ADDR_WIDTH = 6,
         unsigned int C_S_AXI_AXILITES_DATA_WIDTH = 32>
struct axis_to_ddr_writer : public sc_module {
    // Port declarations 70
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_lv<8> > inputStream_V_TDATA;
    sc_in< sc_logic > inputStream_V_TVALID;
    sc_out< sc_logic > inputStream_V_TREADY;
    sc_out< sc_logic > m_axi_base_ddr_addr_AWVALID;
    sc_in< sc_logic > m_axi_base_ddr_addr_AWREADY;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_ADDR_WIDTH> > m_axi_base_ddr_addr_AWADDR;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_ID_WIDTH> > m_axi_base_ddr_addr_AWID;
    sc_out< sc_lv<8> > m_axi_base_ddr_addr_AWLEN;
    sc_out< sc_lv<3> > m_axi_base_ddr_addr_AWSIZE;
    sc_out< sc_lv<2> > m_axi_base_ddr_addr_AWBURST;
    sc_out< sc_lv<2> > m_axi_base_ddr_addr_AWLOCK;
    sc_out< sc_lv<4> > m_axi_base_ddr_addr_AWCACHE;
    sc_out< sc_lv<3> > m_axi_base_ddr_addr_AWPROT;
    sc_out< sc_lv<4> > m_axi_base_ddr_addr_AWQOS;
    sc_out< sc_lv<4> > m_axi_base_ddr_addr_AWREGION;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_AWUSER_WIDTH> > m_axi_base_ddr_addr_AWUSER;
    sc_out< sc_logic > m_axi_base_ddr_addr_WVALID;
    sc_in< sc_logic > m_axi_base_ddr_addr_WREADY;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_DATA_WIDTH> > m_axi_base_ddr_addr_WDATA;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_DATA_WIDTH/8> > m_axi_base_ddr_addr_WSTRB;
    sc_out< sc_logic > m_axi_base_ddr_addr_WLAST;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_ID_WIDTH> > m_axi_base_ddr_addr_WID;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_WUSER_WIDTH> > m_axi_base_ddr_addr_WUSER;
    sc_out< sc_logic > m_axi_base_ddr_addr_ARVALID;
    sc_in< sc_logic > m_axi_base_ddr_addr_ARREADY;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_ADDR_WIDTH> > m_axi_base_ddr_addr_ARADDR;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_ID_WIDTH> > m_axi_base_ddr_addr_ARID;
    sc_out< sc_lv<8> > m_axi_base_ddr_addr_ARLEN;
    sc_out< sc_lv<3> > m_axi_base_ddr_addr_ARSIZE;
    sc_out< sc_lv<2> > m_axi_base_ddr_addr_ARBURST;
    sc_out< sc_lv<2> > m_axi_base_ddr_addr_ARLOCK;
    sc_out< sc_lv<4> > m_axi_base_ddr_addr_ARCACHE;
    sc_out< sc_lv<3> > m_axi_base_ddr_addr_ARPROT;
    sc_out< sc_lv<4> > m_axi_base_ddr_addr_ARQOS;
    sc_out< sc_lv<4> > m_axi_base_ddr_addr_ARREGION;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_ARUSER_WIDTH> > m_axi_base_ddr_addr_ARUSER;
    sc_in< sc_logic > m_axi_base_ddr_addr_RVALID;
    sc_out< sc_logic > m_axi_base_ddr_addr_RREADY;
    sc_in< sc_uint<C_M_AXI_BASE_DDR_ADDR_DATA_WIDTH> > m_axi_base_ddr_addr_RDATA;
    sc_in< sc_logic > m_axi_base_ddr_addr_RLAST;
    sc_in< sc_uint<C_M_AXI_BASE_DDR_ADDR_ID_WIDTH> > m_axi_base_ddr_addr_RID;
    sc_in< sc_uint<C_M_AXI_BASE_DDR_ADDR_RUSER_WIDTH> > m_axi_base_ddr_addr_RUSER;
    sc_in< sc_lv<2> > m_axi_base_ddr_addr_RRESP;
    sc_in< sc_logic > m_axi_base_ddr_addr_BVALID;
    sc_out< sc_logic > m_axi_base_ddr_addr_BREADY;
    sc_in< sc_lv<2> > m_axi_base_ddr_addr_BRESP;
    sc_in< sc_uint<C_M_AXI_BASE_DDR_ADDR_ID_WIDTH> > m_axi_base_ddr_addr_BID;
    sc_in< sc_uint<C_M_AXI_BASE_DDR_ADDR_BUSER_WIDTH> > m_axi_base_ddr_addr_BUSER;
    sc_out< sc_lv<8> > frame_index_V;
    sc_out< sc_lv<32> > frame_count;
    sc_in< sc_logic > s_axi_AXILiteS_AWVALID;
    sc_out< sc_logic > s_axi_AXILiteS_AWREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_AWADDR;
    sc_in< sc_logic > s_axi_AXILiteS_WVALID;
    sc_out< sc_logic > s_axi_AXILiteS_WREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_WDATA;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH/8> > s_axi_AXILiteS_WSTRB;
    sc_in< sc_logic > s_axi_AXILiteS_ARVALID;
    sc_out< sc_logic > s_axi_AXILiteS_ARREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_ARADDR;
    sc_out< sc_logic > s_axi_AXILiteS_RVALID;
    sc_in< sc_logic > s_axi_AXILiteS_RREADY;
    sc_out< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_RDATA;
    sc_out< sc_lv<2> > s_axi_AXILiteS_RRESP;
    sc_out< sc_logic > s_axi_AXILiteS_BVALID;
    sc_in< sc_logic > s_axi_AXILiteS_BREADY;
    sc_out< sc_lv<2> > s_axi_AXILiteS_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_logic > ap_var_for_const1;
    sc_signal< sc_lv<32> > ap_var_for_const2;
    sc_signal< sc_lv<1> > ap_var_for_const3;
    sc_signal< sc_lv<2> > ap_var_for_const5;
    sc_signal< sc_lv<4> > ap_var_for_const6;
    sc_signal< sc_lv<32> > ap_var_for_const7;
    sc_signal< sc_lv<3> > ap_var_for_const4;
    sc_signal< sc_lv<8> > ap_var_for_const8;


    // Module declarations
    axis_to_ddr_writer(sc_module_name name);
    SC_HAS_PROCESS(axis_to_ddr_writer);

    ~axis_to_ddr_writer();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    axis_to_ddr_writer_AXILiteS_s_axi<C_S_AXI_AXILITES_ADDR_WIDTH,C_S_AXI_AXILITES_DATA_WIDTH>* axis_to_ddr_writer_AXILiteS_s_axi_U;
    axis_to_ddr_writer_base_ddr_addr_m_axi<0,64,32,5,16,16,16,16,C_M_AXI_BASE_DDR_ADDR_ID_WIDTH,C_M_AXI_BASE_DDR_ADDR_ADDR_WIDTH,C_M_AXI_BASE_DDR_ADDR_DATA_WIDTH,C_M_AXI_BASE_DDR_ADDR_AWUSER_WIDTH,C_M_AXI_BASE_DDR_ADDR_ARUSER_WIDTH,C_M_AXI_BASE_DDR_ADDR_WUSER_WIDTH,C_M_AXI_BASE_DDR_ADDR_RUSER_WIDTH,C_M_AXI_BASE_DDR_ADDR_BUSER_WIDTH,C_M_AXI_BASE_DDR_ADDR_TARGET_ADDR,C_M_AXI_BASE_DDR_ADDR_USER_VALUE,C_M_AXI_BASE_DDR_ADDR_PROT_VALUE,C_M_AXI_BASE_DDR_ADDR_CACHE_VALUE>* axis_to_ddr_writer_base_ddr_addr_m_axi_U;
    axis_to_ddr_writebkb* buffer_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<10> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<8> > inputStream_V_0_data_out;
    sc_signal< sc_logic > inputStream_V_0_vld_in;
    sc_signal< sc_logic > inputStream_V_0_vld_out;
    sc_signal< sc_logic > inputStream_V_0_ack_in;
    sc_signal< sc_logic > inputStream_V_0_ack_out;
    sc_signal< sc_lv<8> > inputStream_V_0_payload_A;
    sc_signal< sc_lv<8> > inputStream_V_0_payload_B;
    sc_signal< sc_logic > inputStream_V_0_sel_rd;
    sc_signal< sc_logic > inputStream_V_0_sel_wr;
    sc_signal< sc_logic > inputStream_V_0_sel;
    sc_signal< sc_logic > inputStream_V_0_load_A;
    sc_signal< sc_logic > inputStream_V_0_load_B;
    sc_signal< sc_lv<2> > inputStream_V_0_state;
    sc_signal< sc_logic > inputStream_V_0_state_cmp_full;
    sc_signal< sc_lv<32> > base_address;
    sc_signal< sc_lv<32> > frame_buffer_dim;
    sc_signal< sc_lv<32> > frame_buffer_offset;
    sc_signal< sc_lv<8> > frame_buffer_number;
    sc_signal< sc_logic > update_intr;
    sc_signal< sc_lv<8> > inner_index_V;
    sc_signal< sc_lv<32> > FRAME_OFFSET;
    sc_signal< sc_lv<29> > BASE_ADDRESS_r;
    sc_signal< sc_lv<32> > FRAME_BUFFER_DIM_r;
    sc_signal< sc_lv<8> > FRAME_BUFFER_NUMBER_r;
    sc_signal< sc_lv<32> > frame_count_inner;
    sc_signal< sc_logic > inputStream_V_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_658;
    sc_signal< sc_logic > base_ddr_addr_blk_n_AW;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > base_ddr_addr_blk_n_W;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter2;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<1> > exitcond_reg_698;
    sc_signal< sc_lv<1> > exitcond_reg_698_pp1_iter1_reg;
    sc_signal< sc_logic > base_ddr_addr_blk_n_B;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > base_ddr_addr_AWVALID;
    sc_signal< sc_logic > base_ddr_addr_AWREADY;
    sc_signal< sc_lv<32> > base_ddr_addr_AWADDR;
    sc_signal< sc_logic > base_ddr_addr_WVALID;
    sc_signal< sc_logic > base_ddr_addr_WREADY;
    sc_signal< sc_logic > base_ddr_addr_ARREADY;
    sc_signal< sc_logic > base_ddr_addr_RVALID;
    sc_signal< sc_lv<64> > base_ddr_addr_RDATA;
    sc_signal< sc_logic > base_ddr_addr_RLAST;
    sc_signal< sc_lv<1> > base_ddr_addr_RID;
    sc_signal< sc_lv<1> > base_ddr_addr_RUSER;
    sc_signal< sc_lv<2> > base_ddr_addr_RRESP;
    sc_signal< sc_logic > base_ddr_addr_BVALID;
    sc_signal< sc_logic > base_ddr_addr_BREADY;
    sc_signal< sc_lv<2> > base_ddr_addr_BRESP;
    sc_signal< sc_lv<1> > base_ddr_addr_BID;
    sc_signal< sc_lv<1> > base_ddr_addr_BUSER;
    sc_signal< sc_lv<13> > indvar_flatten_reg_291;
    sc_signal< sc_lv<10> > j_reg_302;
    sc_signal< sc_lv<64> > temp_reg_313;
    sc_signal< sc_lv<4> > i_reg_325;
    sc_signal< sc_lv<10> > indvar_reg_336;
    sc_signal< sc_lv<8> > t_V_reg_638;
    sc_signal< sc_lv<32> > offset_fu_425_p2;
    sc_signal< sc_lv<1> > tmp_1_fu_449_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<32> > idx_1_fu_455_p2;
    sc_signal< sc_lv<32> > idx_1_reg_653;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_520_p2;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<13> > indvar_flatten_next_fu_526_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > tmp_4_fu_538_p2;
    sc_signal< sc_lv<1> > tmp_4_reg_667;
    sc_signal< sc_lv<10> > j_mid2_fu_544_p3;
    sc_signal< sc_lv<10> > j_mid2_reg_672;
    sc_signal< sc_lv<4> > i_1_fu_558_p3;
    sc_signal< sc_lv<4> > i_1_reg_678;
    sc_signal< sc_lv<64> > temp_2_fu_583_p3;
    sc_signal< sc_logic > ap_sig_ioackin_base_ddr_addr_AWREADY;
    sc_signal< sc_lv<1> > exitcond_fu_612_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< bool > ap_block_state6_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state7_pp1_stage0_iter1;
    sc_signal< bool > ap_block_state8_pp1_stage0_iter2;
    sc_signal< sc_logic > ap_sig_ioackin_base_ddr_addr_WREADY;
    sc_signal< bool > ap_block_state8_io;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<10> > indvar_next_fu_618_p2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<64> > buffer_q0;
    sc_signal< sc_lv<64> > buffer_load_reg_712;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< sc_lv<32> > offset_1_fu_629_p2;
    sc_signal< sc_lv<32> > offset_1_reg_717;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state6;
    sc_signal< sc_lv<9> > buffer_address0;
    sc_signal< sc_logic > buffer_ce0;
    sc_signal< sc_lv<9> > buffer_address1;
    sc_signal< sc_logic > buffer_ce1;
    sc_signal< sc_logic > buffer_we1;
    sc_signal< sc_lv<64> > buffer_d1;
    sc_signal< sc_lv<32> > ap_phi_mux_i_op_assign_phi_fu_254_p4;
    sc_signal< sc_lv<1> > update_intr_read_read_fu_164_p2;
    sc_signal< sc_lv<29> > ap_phi_mux_i_op_assign_1_phi_fu_264_p4;
    sc_signal< sc_lv<32> > offset1_reg_270;
    sc_signal< sc_lv<32> > idx_reg_280;
    sc_signal< sc_lv<10> > ap_phi_mux_j_phi_fu_306_p4;
    sc_signal< sc_lv<4> > ap_phi_mux_i_phi_fu_329_p4;
    sc_signal< sc_lv<64> > tmp_10_fu_597_p1;
    sc_signal< sc_lv<1> > ifzero_fu_592_p2;
    sc_signal< sc_lv<64> > indvar1_fu_624_p1;
    sc_signal< sc_lv<64> > tmp_9_fu_601_p1;
    sc_signal< sc_logic > ap_reg_ioackin_base_ddr_addr_AWREADY;
    sc_signal< sc_logic > ap_reg_ioackin_base_ddr_addr_WREADY;
    sc_signal< bool > ap_block_pp1_stage0_01001;
    sc_signal< sc_lv<8> > p_tmp_7_fu_489_p3;
    sc_signal< sc_lv<32> > tmp_2_fu_507_p2;
    sc_signal< sc_lv<8> > frame_index_V_preg;
    sc_signal< sc_lv<32> > r_V_fu_409_p0;
    sc_signal< sc_lv<8> > r_V_fu_409_p1;
    sc_signal< sc_lv<35> > r_V_fu_409_p2;
    sc_signal< sc_lv<32> > tmp_8_fu_415_p4;
    sc_signal< sc_lv<32> > i_op_assign_1_cast_fu_397_p1;
    sc_signal< sc_lv<20> > tmp_s_fu_435_p4;
    sc_signal< sc_lv<32> > tmp_3_fu_445_p1;
    sc_signal< sc_lv<9> > tmp_2_cast_fu_465_p1;
    sc_signal< sc_lv<9> > tmp_4_cast_fu_475_p1;
    sc_signal< sc_lv<9> > op2_assign_fu_469_p2;
    sc_signal< sc_lv<1> > tmp_5_fu_478_p2;
    sc_signal< sc_lv<8> > tmp_7_fu_484_p2;
    sc_signal< sc_lv<10> > j_s_fu_532_p2;
    sc_signal< sc_lv<4> > i_op_fu_552_p2;
    sc_signal< sc_lv<56> > tmp_11_fu_566_p4;
    sc_signal< sc_lv<56> > temp_1_fu_576_p3;
    sc_signal< sc_lv<10> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    sc_signal< sc_lv<35> > r_V_fu_409_p00;
    sc_signal< sc_lv<35> > r_V_fu_409_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<10> ap_ST_fsm_state1;
    static const sc_lv<10> ap_ST_fsm_state2;
    static const sc_lv<10> ap_ST_fsm_pp0_stage0;
    static const sc_lv<10> ap_ST_fsm_state5;
    static const sc_lv<10> ap_ST_fsm_pp1_stage0;
    static const sc_lv<10> ap_ST_fsm_state9;
    static const sc_lv<10> ap_ST_fsm_state10;
    static const sc_lv<10> ap_ST_fsm_state11;
    static const sc_lv<10> ap_ST_fsm_state12;
    static const sc_lv<10> ap_ST_fsm_state13;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_9;
    static const int C_S_AXI_DATA_WIDTH;
    static const int C_M_AXI_BASE_DDR_ADDR_TARGET_ADDR;
    static const int C_M_AXI_BASE_DDR_ADDR_USER_VALUE;
    static const int C_M_AXI_BASE_DDR_ADDR_PROT_VALUE;
    static const int C_M_AXI_BASE_DDR_ADDR_CACHE_VALUE;
    static const int C_M_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_200;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<9> ap_const_lv9_1FF;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<13> ap_const_lv13_1000;
    static const sc_lv<13> ap_const_lv13_1;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<56> ap_const_lv56_0;
    static const sc_lv<10> ap_const_lv10_200;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const5();
    void thread_ap_var_for_const6();
    void thread_ap_var_for_const7();
    void thread_ap_var_for_const4();
    void thread_ap_var_for_const8();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_01001();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_state3_pp0_stage0_iter0();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_block_state6_pp1_stage0_iter0();
    void thread_ap_block_state7_pp1_stage0_iter1();
    void thread_ap_block_state8_io();
    void thread_ap_block_state8_pp1_stage0_iter2();
    void thread_ap_condition_pp0_exit_iter0_state3();
    void thread_ap_condition_pp1_exit_iter0_state6();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_phi_mux_i_op_assign_1_phi_fu_264_p4();
    void thread_ap_phi_mux_i_op_assign_phi_fu_254_p4();
    void thread_ap_phi_mux_i_phi_fu_329_p4();
    void thread_ap_phi_mux_j_phi_fu_306_p4();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sig_ioackin_base_ddr_addr_AWREADY();
    void thread_ap_sig_ioackin_base_ddr_addr_WREADY();
    void thread_base_ddr_addr_AWADDR();
    void thread_base_ddr_addr_AWVALID();
    void thread_base_ddr_addr_BREADY();
    void thread_base_ddr_addr_WVALID();
    void thread_base_ddr_addr_blk_n_AW();
    void thread_base_ddr_addr_blk_n_B();
    void thread_base_ddr_addr_blk_n_W();
    void thread_buffer_address0();
    void thread_buffer_address1();
    void thread_buffer_ce0();
    void thread_buffer_ce1();
    void thread_buffer_d1();
    void thread_buffer_we1();
    void thread_exitcond_flatten_fu_520_p2();
    void thread_exitcond_fu_612_p2();
    void thread_frame_count();
    void thread_frame_index_V();
    void thread_i_1_fu_558_p3();
    void thread_i_op_assign_1_cast_fu_397_p1();
    void thread_i_op_fu_552_p2();
    void thread_idx_1_fu_455_p2();
    void thread_ifzero_fu_592_p2();
    void thread_indvar1_fu_624_p1();
    void thread_indvar_flatten_next_fu_526_p2();
    void thread_indvar_next_fu_618_p2();
    void thread_inputStream_V_0_ack_in();
    void thread_inputStream_V_0_ack_out();
    void thread_inputStream_V_0_data_out();
    void thread_inputStream_V_0_load_A();
    void thread_inputStream_V_0_load_B();
    void thread_inputStream_V_0_sel();
    void thread_inputStream_V_0_state_cmp_full();
    void thread_inputStream_V_0_vld_in();
    void thread_inputStream_V_0_vld_out();
    void thread_inputStream_V_TDATA_blk_n();
    void thread_inputStream_V_TREADY();
    void thread_j_mid2_fu_544_p3();
    void thread_j_s_fu_532_p2();
    void thread_offset_1_fu_629_p2();
    void thread_offset_fu_425_p2();
    void thread_op2_assign_fu_469_p2();
    void thread_p_tmp_7_fu_489_p3();
    void thread_r_V_fu_409_p0();
    void thread_r_V_fu_409_p00();
    void thread_r_V_fu_409_p1();
    void thread_r_V_fu_409_p10();
    void thread_r_V_fu_409_p2();
    void thread_temp_1_fu_576_p3();
    void thread_temp_2_fu_583_p3();
    void thread_tmp_10_fu_597_p1();
    void thread_tmp_11_fu_566_p4();
    void thread_tmp_1_fu_449_p2();
    void thread_tmp_2_cast_fu_465_p1();
    void thread_tmp_2_fu_507_p2();
    void thread_tmp_3_fu_445_p1();
    void thread_tmp_4_cast_fu_475_p1();
    void thread_tmp_4_fu_538_p2();
    void thread_tmp_5_fu_478_p2();
    void thread_tmp_7_fu_484_p2();
    void thread_tmp_8_fu_415_p4();
    void thread_tmp_9_fu_601_p1();
    void thread_tmp_s_fu_435_p4();
    void thread_update_intr_read_read_fu_164_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif