function gui

    field_v_c = uicontrol('Style','edit');
    field_v_c.Position = [20 75 60 20]; 
    field_v_c.Callback = @set_v_c;
    
    c = uicontrol('Style','pushbutton');
    c.Position = [460 20 80 30]; 
    c.Callback = @init;
    
    function set_v_c(hObject, eventdata, handles)
        input = str2double(get(hObject,'String'));
        if isnan(input)
          errordlg('You must enter a numeric value','Invalid Input','modal')
          uicontrol(hObject)
          return
        else
          V_c = input;
        end
    end
end

