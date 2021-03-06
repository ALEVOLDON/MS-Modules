#include "MS-Modules.hpp"

struct SwitchedMult : Module {
	
	enum ParamIds {
		IN_1_PARAM,
		IN_2_PARAM,
		IN_3_PARAM,
		IN_4_PARAM,
		IN_5_PARAM,
		IN_6_PARAM,
		IN_7_PARAM,
		IN_8_PARAM,
		MUTE_1_PARAM,
		MUTE_2_PARAM,
		MUTE_3_PARAM,
		MUTE_4_PARAM,
		MUTE_5_PARAM,
		MUTE_6_PARAM,
		MUTE_7_PARAM,
		MUTE_8_PARAM,
		NUM_PARAMS
	};
	
	enum InputIds {
		IN_1_INPUT,
		IN_2_INPUT,
		IN_3_INPUT,
		IN_4_INPUT,
		IN_5_INPUT,
		IN_6_INPUT,
		IN_7_INPUT,
		IN_8_INPUT,
		NUM_INPUTS
	};
	
	enum OutputIds {
		OUT_1_OUTPUT,
		OUT_2_OUTPUT,
		OUT_3_OUTPUT,
		OUT_4_OUTPUT,
		OUT_5_OUTPUT,
		OUT_6_OUTPUT,
		OUT_7_OUTPUT,
		OUT_8_OUTPUT,
		NUM_OUTPUTS
	};
	
	SwitchedMult() : Module(NUM_PARAMS, NUM_INPUTS, NUM_OUTPUTS) {}
	void step() override;

};

void SwitchedMult::step() {

	
	float IN_1, IN_2, IN_3, IN_4, IN_5, IN_6, IN_7, IN_8, Out_1, Out_2, Out_3, Out_4, Out_5, Out_6, Out_7, Out_8;
		
	bool IN_1_Mode = params[IN_1_PARAM].value > 0.0;
	bool IN_2_Mode = params[IN_2_PARAM].value > 0.0;
	bool IN_3_Mode = params[IN_3_PARAM].value > 0.0;
	bool IN_4_Mode = params[IN_4_PARAM].value > 0.0;
	bool IN_5_Mode = params[IN_5_PARAM].value > 0.0;
	bool IN_6_Mode = params[IN_6_PARAM].value > 0.0;
	bool IN_7_Mode = params[IN_7_PARAM].value > 0.0;
	bool IN_8_Mode = params[IN_8_PARAM].value > 0.0;
	
	bool MUTE_1 = params[MUTE_1_PARAM].value > 0.0;
	bool MUTE_2 = params[MUTE_2_PARAM].value > 0.0;
	bool MUTE_3 = params[MUTE_3_PARAM].value > 0.0;
	bool MUTE_4 = params[MUTE_4_PARAM].value > 0.0;
	bool MUTE_5 = params[MUTE_5_PARAM].value > 0.0;
	bool MUTE_6 = params[MUTE_6_PARAM].value > 0.0;
	bool MUTE_7 = params[MUTE_7_PARAM].value > 0.0;
	bool MUTE_8 = params[MUTE_8_PARAM].value > 0.0;
	
	if(MUTE_1) {
		IN_1 = 0.0;
	}
	else {
		IN_1 = inputs[IN_1_INPUT].value;
	}
	if(MUTE_2) {
		IN_2 = 0.0;
	}
	else {
		IN_2 = inputs[IN_2_INPUT].value;
	}
	if(MUTE_3) {
		IN_3 = 0.0;
	}
	else {
		IN_3 = inputs[IN_3_INPUT].value;
	}
	if(MUTE_4) {
		IN_4 = 0.0;
	}
	else {
		IN_4 = inputs[IN_4_INPUT].value;
	}
	if(MUTE_5) {
		IN_5 = 0.0;
	}
	else {
		IN_5 = inputs[IN_5_INPUT].value;
	}
	if(MUTE_6) {
		IN_6 = 0.0;
	}
	else {
		IN_6 = inputs[IN_6_INPUT].value;
	}
	if(MUTE_7) {
		IN_7 = 0.0;
	}
	else {
		IN_7 = inputs[IN_7_INPUT].value;
	}
	if(MUTE_8) {
		IN_8 = 0.0;
	}
	else {
		IN_8 = inputs[IN_8_INPUT].value;
	}
		
	if(IN_1_Mode) {
		if(inputs[IN_1_INPUT].active) {
		Out_1 = IN_1 + IN_2 + IN_3 + IN_4 + IN_5 + IN_6 + IN_7 + IN_8;
		
		outputs[OUT_1_OUTPUT].value = Out_1;
		outputs[OUT_2_OUTPUT].value = Out_1;
		outputs[OUT_3_OUTPUT].value = Out_1;		
		outputs[OUT_4_OUTPUT].value = Out_1;
		}
	}
	else {
		if(inputs[IN_1_INPUT].active) {
		Out_1 = IN_1 + IN_2 + IN_3 + IN_4 + IN_5 + IN_6 + IN_7 + IN_8;
	
		outputs[OUT_1_OUTPUT].value = Out_1;
		outputs[OUT_2_OUTPUT].value = Out_1;
		outputs[OUT_3_OUTPUT].value = Out_1;		
		outputs[OUT_4_OUTPUT].value = Out_1;
		outputs[OUT_5_OUTPUT].value = Out_1;
		outputs[OUT_6_OUTPUT].value = Out_1;		
		outputs[OUT_7_OUTPUT].value = Out_1;
		outputs[OUT_8_OUTPUT].value = Out_1;		
		}
	}
	
	
	
	if(IN_2_Mode) {
		if(inputs[IN_2_INPUT].active) {
		Out_2 = IN_1 + IN_2 + IN_3 + IN_4 + IN_5 + IN_6 + IN_7 + IN_8;
		
		outputs[OUT_1_OUTPUT].value = Out_2;
		outputs[OUT_2_OUTPUT].value = Out_2;
		outputs[OUT_3_OUTPUT].value = Out_2;		
		outputs[OUT_4_OUTPUT].value = Out_2;	
		}
	}
	else {
		if(inputs[IN_2_INPUT].active) {
		Out_2 = IN_1 + IN_2 + IN_3 + IN_4 + IN_5 + IN_6 + IN_7 + IN_8;
	
		outputs[OUT_1_OUTPUT].value = Out_2;
		outputs[OUT_2_OUTPUT].value = Out_2;
		outputs[OUT_3_OUTPUT].value = Out_2;		
		outputs[OUT_4_OUTPUT].value = Out_2;
		outputs[OUT_5_OUTPUT].value = Out_2;
		outputs[OUT_6_OUTPUT].value = Out_2;		
		outputs[OUT_7_OUTPUT].value = Out_2;
		outputs[OUT_8_OUTPUT].value = Out_2;
		}
	}
	
	if(IN_3_Mode) {
		if(inputs[IN_3_INPUT].active) {
		Out_3 = IN_1 + IN_2 + IN_3 + IN_4 + IN_5 + IN_6 + IN_7 + IN_8;
		
		outputs[OUT_1_OUTPUT].value = Out_3;
		outputs[OUT_2_OUTPUT].value = Out_3;
		outputs[OUT_3_OUTPUT].value = Out_3;		
		outputs[OUT_4_OUTPUT].value = Out_3;	
		}
	}
	else {
		if(inputs[IN_3_INPUT].active) {
		Out_3 = IN_1 + IN_2 + IN_3 + IN_4 + IN_5 + IN_6 + IN_7 + IN_8;
				
		outputs[OUT_1_OUTPUT].value = Out_3;
		outputs[OUT_2_OUTPUT].value = Out_3;
		outputs[OUT_3_OUTPUT].value = Out_3;		
		outputs[OUT_4_OUTPUT].value = Out_3;
		outputs[OUT_5_OUTPUT].value = Out_3;
		outputs[OUT_6_OUTPUT].value = Out_3;		
		outputs[OUT_7_OUTPUT].value = Out_3;
		outputs[OUT_8_OUTPUT].value = Out_3;		
		}
	}
	
	if(IN_4_Mode) {
		if(inputs[IN_4_INPUT].active) {
		Out_4 = IN_1 + IN_2 + IN_3 + IN_4 + IN_5 + IN_6 + IN_7 + IN_8;
		
		outputs[OUT_1_OUTPUT].value = Out_4;
		outputs[OUT_2_OUTPUT].value = Out_4;
		outputs[OUT_3_OUTPUT].value = Out_4;		
		outputs[OUT_4_OUTPUT].value = Out_4;	
		}
	}
	else {
		if(inputs[IN_4_INPUT].active) {
		Out_4 = IN_1 + IN_2 + IN_3 + IN_4 + IN_5 + IN_6 + IN_7 + IN_8;
		
		outputs[OUT_1_OUTPUT].value = Out_4;
		outputs[OUT_2_OUTPUT].value = Out_4;
		outputs[OUT_3_OUTPUT].value = Out_4;		
		outputs[OUT_4_OUTPUT].value = Out_4;
		outputs[OUT_5_OUTPUT].value = Out_4;
		outputs[OUT_6_OUTPUT].value = Out_4;		
		outputs[OUT_7_OUTPUT].value = Out_4;
		outputs[OUT_8_OUTPUT].value = Out_4;		
		}
	}
	
	if(IN_5_Mode) {
		if(inputs[IN_5_INPUT].active) {
		Out_5 = IN_1 + IN_2 + IN_3 + IN_4 + IN_5 + IN_6 + IN_7 + IN_8;
	
		outputs[OUT_5_OUTPUT].value = Out_5;
		outputs[OUT_6_OUTPUT].value = Out_5;
		outputs[OUT_7_OUTPUT].value = Out_5;		
		outputs[OUT_8_OUTPUT].value = Out_5;	
		}
	}
	else {
		if(inputs[IN_5_INPUT].active) {
		Out_5 = IN_1 + IN_2 + IN_3 + IN_4 + IN_5 + IN_6 + IN_7 + IN_8;
			
		outputs[OUT_1_OUTPUT].value = Out_5;
		outputs[OUT_2_OUTPUT].value = Out_5;
		outputs[OUT_3_OUTPUT].value = Out_5;		
		outputs[OUT_4_OUTPUT].value = Out_5;
		outputs[OUT_5_OUTPUT].value = Out_5;
		outputs[OUT_6_OUTPUT].value = Out_5;		
		outputs[OUT_7_OUTPUT].value = Out_5;
		outputs[OUT_8_OUTPUT].value = Out_5;		
		}
	}
	
	if(IN_6_Mode) {
		if(inputs[IN_6_INPUT].active) {
		Out_6 = IN_1 + IN_2 + IN_3 + IN_4 + IN_5 + IN_6 + IN_7 + IN_8;
			
		outputs[OUT_5_OUTPUT].value = Out_6;
		outputs[OUT_6_OUTPUT].value = Out_6;
		outputs[OUT_7_OUTPUT].value = Out_6;		
		outputs[OUT_8_OUTPUT].value = Out_6;	
		}
	}
	else {
		if(inputs[IN_6_INPUT].active) {
		Out_6 = IN_1 + IN_2 + IN_3 + IN_4 + IN_5 + IN_6 + IN_7 + IN_8;
			
		outputs[OUT_1_OUTPUT].value = Out_6;
		outputs[OUT_2_OUTPUT].value = Out_6;
		outputs[OUT_3_OUTPUT].value = Out_6;		
		outputs[OUT_4_OUTPUT].value = Out_6;
		outputs[OUT_5_OUTPUT].value = Out_6;
		outputs[OUT_6_OUTPUT].value = Out_6;		
		outputs[OUT_7_OUTPUT].value = Out_6;
		outputs[OUT_8_OUTPUT].value = Out_6;		
		}
	}
	
	if(IN_7_Mode) {
		if(inputs[IN_7_INPUT].active) {
		Out_7 = IN_1 + IN_2 + IN_3 + IN_4 + IN_5 + IN_6 + IN_7 + IN_8;
			
		outputs[OUT_5_OUTPUT].value = Out_7;
		outputs[OUT_6_OUTPUT].value = Out_7;
		outputs[OUT_7_OUTPUT].value = Out_7;		
		outputs[OUT_8_OUTPUT].value = Out_7;	
		}
	}
	else {
		if(inputs[IN_7_INPUT].active) {
		Out_7 = IN_1 + IN_2 + IN_3 + IN_4 + IN_5 + IN_6 + IN_7 + IN_8;
			
		outputs[OUT_1_OUTPUT].value = Out_7;
		outputs[OUT_2_OUTPUT].value = Out_7;
		outputs[OUT_3_OUTPUT].value = Out_7;		
		outputs[OUT_4_OUTPUT].value = Out_7;
		outputs[OUT_5_OUTPUT].value = Out_7;
		outputs[OUT_6_OUTPUT].value = Out_7;		
		outputs[OUT_7_OUTPUT].value = Out_7;
		outputs[OUT_8_OUTPUT].value = Out_7;		
		}
	}
	
	if(IN_8_Mode) {
		if(inputs[IN_8_INPUT].active) {
		Out_8 = IN_1 + IN_2 + IN_3 + IN_4 + IN_5 + IN_6 + IN_7 + IN_8;
		
		outputs[OUT_5_OUTPUT].value = Out_8;
		outputs[OUT_6_OUTPUT].value = Out_8;
		outputs[OUT_7_OUTPUT].value = Out_8;		
		outputs[OUT_8_OUTPUT].value = Out_8;	
		}
	}
	else {
		if(inputs[IN_8_INPUT].active) {
		Out_8 = IN_1 + IN_2 + IN_3 + IN_4 + IN_5 + IN_6 + IN_7 + IN_8;
				
		outputs[OUT_1_OUTPUT].value = Out_8;
		outputs[OUT_2_OUTPUT].value = Out_8;
		outputs[OUT_3_OUTPUT].value = Out_8;		
		outputs[OUT_4_OUTPUT].value = Out_8;
		outputs[OUT_5_OUTPUT].value = Out_8;
		outputs[OUT_6_OUTPUT].value = Out_8;		
		outputs[OUT_7_OUTPUT].value = Out_8;
		outputs[OUT_8_OUTPUT].value = Out_8;		
		}
	}
	
	
};

SwitchedMultWidget::SwitchedMultWidget() 
{
	SwitchedMult *module = new SwitchedMult();
    setModule(module);
    box.size = Vec(150, 380);
	
	{
        SVGPanel *panel = new SVGPanel();
		panel->box.size = box.size;
		panel->setBackground(SVG::load(assetPlugin(plugin, "/res/SwitchedMult.svg")));
		addChild(panel);
    }
	
	int space = 25;
	
	addChild(createScrew<ScrewSilver>(Vec(15, 0)));
	addChild(createScrew<ScrewSilver>(Vec(15, 365)));
	addChild(createScrew<ScrewSilver>(Vec(120, 0)));
	addChild(createScrew<ScrewSilver>(Vec(120, 365)));
	
	addParam(createParam<CKSS>(Vec(84, 35 + space), module, SwitchedMult::IN_1_PARAM, 0.0, 1.0, 1.0));
	addParam(createParam<CKSS>(Vec(84, 70 + space), module, SwitchedMult::IN_2_PARAM, 0.0, 1.0, 1.0));
	addParam(createParam<CKSS>(Vec(84, 105 + space), module, SwitchedMult::IN_3_PARAM, 0.0, 1.0, 1.0));
	addParam(createParam<CKSS>(Vec(84, 140 + space), module, SwitchedMult::IN_4_PARAM, 0.0, 1.0, 1.0));
	
	addParam(createParam<CKSS>(Vec(84, 187 + space), module, SwitchedMult::IN_5_PARAM, 0.0, 1.0, 1.0));
	addParam(createParam<CKSS>(Vec(84, 222 + space), module, SwitchedMult::IN_6_PARAM, 0.0, 1.0, 1.0));
	addParam(createParam<CKSS>(Vec(84, 257 + space), module, SwitchedMult::IN_7_PARAM, 0.0, 1.0, 1.0));
	addParam(createParam<CKSS>(Vec(84, 292 + space), module, SwitchedMult::IN_8_PARAM, 0.0, 1.0, 1.0));
	
	addParam(createParam<CKSS>(Vec(53, 35 + space), module, SwitchedMult::MUTE_1_PARAM, 0.0, 1.0, 0.0));
	addParam(createParam<CKSS>(Vec(53, 70 + space), module, SwitchedMult::MUTE_2_PARAM, 0.0, 1.0, 0.0));
	addParam(createParam<CKSS>(Vec(53, 105 + space), module, SwitchedMult::MUTE_3_PARAM, 0.0, 1.0, 0.0));
	addParam(createParam<CKSS>(Vec(53, 140 + space), module, SwitchedMult::MUTE_4_PARAM, 0.0, 1.0, 0.0));
	
	addParam(createParam<CKSS>(Vec(53, 187 + space), module, SwitchedMult::MUTE_5_PARAM, 0.0, 1.0, 0.0));
	addParam(createParam<CKSS>(Vec(53, 222 + space), module, SwitchedMult::MUTE_6_PARAM, 0.0, 1.0, 0.0));
	addParam(createParam<CKSS>(Vec(53, 257 + space), module, SwitchedMult::MUTE_7_PARAM, 0.0, 1.0, 0.0));
	addParam(createParam<CKSS>(Vec(53, 292 + space), module, SwitchedMult::MUTE_8_PARAM, 0.0, 1.0, 0.0));
	
	addInput(createInput<SilverSixPort>(Vec(10, 35 + space), module, SwitchedMult::IN_1_INPUT));
	addInput(createInput<SilverSixPort>(Vec(10, 70 + space), module, SwitchedMult::IN_2_INPUT));
	addInput(createInput<SilverSixPort>(Vec(10, 105 + space), module, SwitchedMult::IN_3_INPUT));
	addInput(createInput<SilverSixPort>(Vec(10, 140 + space), module, SwitchedMult::IN_4_INPUT));
	
	addInput(createInput<SilverSixPort>(Vec(10, 187 + space), module, SwitchedMult::IN_5_INPUT));
	addInput(createInput<SilverSixPort>(Vec(10, 222 + space), module, SwitchedMult::IN_6_INPUT));
	addInput(createInput<SilverSixPort>(Vec(10, 257 + space), module, SwitchedMult::IN_7_INPUT));
	addInput(createInput<SilverSixPort>(Vec(10, 292	+ space), module, SwitchedMult::IN_8_INPUT));
	
	addOutput(createOutput<SilverSixPort>(Vec(117, 35 + space), module, SwitchedMult::OUT_1_OUTPUT));
	addOutput(createOutput<SilverSixPort>(Vec(117, 70 + space), module, SwitchedMult::OUT_2_OUTPUT));
	addOutput(createOutput<SilverSixPort>(Vec(117, 105 + space), module, SwitchedMult::OUT_3_OUTPUT));
	addOutput(createOutput<SilverSixPort>(Vec(117, 140 + space), module, SwitchedMult::OUT_4_OUTPUT));
	
	addOutput(createOutput<SilverSixPort>(Vec(117, 187 + space), module, SwitchedMult::OUT_5_OUTPUT));
	addOutput(createOutput<SilverSixPort>(Vec(117, 222 + space), module, SwitchedMult::OUT_6_OUTPUT));
	addOutput(createOutput<SilverSixPort>(Vec(117, 257 + space), module, SwitchedMult::OUT_7_OUTPUT));
	addOutput(createOutput<SilverSixPort>(Vec(117, 292 + space), module, SwitchedMult::OUT_8_OUTPUT));
	
};