/*
 * Copyright (C) 2018 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * GNU Lesser General Public License v2.1 or any later version.
 */

#ifndef WBT_INVERSEDYNAMICS_H
#define WBT_INVERSEDYNAMICS_H

#include "WBToolbox/Base/WBBlock.h"

#include <memory>
#include <string>

namespace wbt {
    namespace block {
        class InverseDynamics;
    } // namespace block
} // namespace wbt

namespace blockfactory {
    namespace core {
        class BlockInformation;
    } // namespace core
} // namespace blockfactory

/**
 * @brief The wbt::InverseDynamics class
 */
class wbt::block::InverseDynamics final : public wbt::base::WBBlock
{
private:
    class impl;
    std::unique_ptr<impl> pImpl;

public:
    InverseDynamics();
    ~InverseDynamics() override;

    unsigned numberOfParameters() override;
    bool configureSizeAndPorts(blockfactory::core::BlockInformation* blockInfo) override;
    bool initialize(blockfactory::core::BlockInformation* blockInfo) override;
    bool terminate(const blockfactory::core::BlockInformation* blockInfo) override;
    bool output(const blockfactory::core::BlockInformation* blockInfo) override;
};

#endif // WBT_INVERSEDYNAMICS_H
