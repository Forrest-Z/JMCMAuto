import React from "react";
import { inject, observer } from "mobx-react";

import DataRecorder from "components/DataRecorder";
import ModuleController from "components/ModuleController";
import Menu from "components/SideBar/Menu";
import POI from "components/SideBar/POI";
import Tasks from "components/Tasks";
import Remote5G from "components/Remote5G";

@inject("store") @observer
export default class ToolView extends React.Component {
    render() {
        const { options, routeEditingManager, hmi,meters } = this.props.store;

        return (
            <div className="tools">
                {options.showTasks && <Tasks />}
                {options.showModuleController && <ModuleController />}
                {options.showMenu && <Menu options={options} /> }
                {options.showPOI && <POI routeEditingManager={routeEditingManager}
                                         options={options}
                                         inNavigationMode={hmi.inNavigationMode} />}
                {options.showDataRecorder && <DataRecorder />}
                {options.showRemote5G && <Remote5G meters={meters} />}
            </div>
        );
    }
}