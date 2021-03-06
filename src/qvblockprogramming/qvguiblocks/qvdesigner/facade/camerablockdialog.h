/*
 *	Copyright (C) 2008, 2009, 2010, 2011, 2012. PARP Research Group.
 *	<http://perception.inf.um.es>
 *	University of Murcia, Spain.
 *
 *	This file is part of the QVision library.
 *
 *	QVision is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU Lesser General Public License as
 *	published by the Free Software Foundation, version 3 of the License.
 *
 *	QVision is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU Lesser General Public License for more details.
 *
 *	You should have received a copy of the GNU Lesser General Public
 *	License along with QVision. If not, see <http://www.gnu.org/licenses/>.
 */

/// @file
/// @brief File from the QVision library.
/// @author PARP Research Group. University of Murcia, Spain.

#ifndef CAMERAWORKERDIALOG_H
#define CAMERAWORKERDIALOG_H

#include <QDialog>
#include "../../qvvideoreaderblockwidget.h"
#include "../../qvvideoreaderblockwidgetsmall.h"

class QVVideoReaderBlock;

#ifndef DOXYGEN_IGNORE_THIS

class CameraBlockDialog: public QDialog
{
    Q_OBJECT

    public:
        CameraBlockDialog(QVVideoReaderBlock *camera, QWidget *parent = 0);

        /// @brief Gets the QVParamsInspectorWidget's QVPropertyContainerInformer.
        ///
                /// The QVParamsInspectorWidget's QVPropertyContainerInformer is the object in charge of
                /// emit the changes of the QVPropertyContainer.
        ///
        /// @return the QVParamsInspectorWidget's QVPropertyContainerInformer.
        QVPropertyContainerInformer *getInformer() { return cameraWidget.getInformer(); }

        uint getNodeId() { return cameraWidget.getId(); }

    private:
        QVVideoReaderBlockWidget cameraWidget;
        QVBoxLayout *vboxlayout;
};
#endif
#endif

